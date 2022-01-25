class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        
        vector<int> ans;
        
        for(int i=0; i<nums.size();i++)
            if((!mp.count(nums[i]+1) && !mp.count(nums[i]-1) ) && mp[nums[i]]==1)
                    ans.push_back(nums[i]);
        return ans;
    }
};