class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        multimap<int,int,greater<int>>mp1;
        for(auto it=mp.begin();it!=mp.end();it++){
            int x=it->second;
            int y=it->first;
            //cout<<x<<" "<<y<<endl;
            mp1.insert(pair<int, int>(x, y));
        }
        vector<int>res;
        for(auto it=mp1.begin();it!=mp1.end()&&k>0;it++){
            int x=it->second;
            res.push_back(x);
            k--;
        }
        return res;
    }
};