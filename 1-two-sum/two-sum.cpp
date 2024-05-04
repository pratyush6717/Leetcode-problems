class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(mp.find(target-num)!=mp.end()){
                ans[0]=mp[target-num];
                ans[1]=i;
            }
            else{
                mp[num]=i;
            }
        }
        return ans;
    }
};