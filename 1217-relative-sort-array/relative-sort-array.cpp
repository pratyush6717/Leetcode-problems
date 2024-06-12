class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>res;
        map<int,int>mp;
        map<int,bool>visited;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            int y=mp[arr2[i]];
            while(y>0){
                res.push_back(arr2[i]);
                y--;
            }
            visited[arr2[i]]=true;
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            if(!visited[arr1[i]]){
                res.push_back(arr1[i]);
            }
        }
        return res;
    }
};