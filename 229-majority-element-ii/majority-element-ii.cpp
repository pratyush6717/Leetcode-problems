class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size();
        n=n/3;
        vector<int>res;
        for(auto it=mp.begin();it!=mp.end();it++){
            int x=it->second;
            int y=it->first;
            if(x>n){
                res.push_back(y);
            }
        }
        return res;
    }
};