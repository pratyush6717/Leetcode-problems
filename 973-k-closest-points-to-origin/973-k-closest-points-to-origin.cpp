class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        multimap<double,vector<int>>mp;
        for(int i=0;i<points.size();i++){
            vector<int>v;
            int x=points[i][0];
            int y=points[i][1];
            double res=sqrt((x*x)+(y*y));
            v.push_back(x);
            v.push_back(y);
            mp.insert(pair<double, vector<int>>(res, v));
        }
        for(auto it=mp.begin();it!=mp.end()&&k>0;it++){
            //vector<int> v= it.second;
            res.push_back(it->second);
            k--;
        }
        return res;
    }
};