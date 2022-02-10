class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int cuml=0,ans=0;
        for(int i=0;i<nums.size();i++){
            cuml=cuml+nums[i];
            
              auto it = mp.find(cuml-k);
        if (it != mp.end()) ans += it->second;
            mp[cuml]++;
        }
       
        return ans;
    }
};