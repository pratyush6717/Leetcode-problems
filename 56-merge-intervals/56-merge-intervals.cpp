class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        int n=intervals.size()-1;
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>intervals[i-1][1]){
                vector<int>v;
                v.push_back(intervals[i-1][0]);
                v.push_back(intervals[i-1][1]);
                res.push_back(v);
            }
            else{
               intervals[i][0]=min(intervals[i-1][0],intervals[i][0]);
                intervals[i][1]=max(intervals[i-1][1],intervals[i][1]);
                //cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
                
            }
        }
                vector<int>v;
                v.push_back(intervals[n][0]);
                v.push_back(intervals[n][1]);
                res.push_back(v);
           
        return res;
    }
};