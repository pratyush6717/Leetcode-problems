class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v1;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
                if(mp.count(target-nums[i])){
                    v1.push_back(i);
                    v1.push_back(mp[target-nums[i]]);
                    return v1;
                }
            else{
                mp[nums[i]]=i;
            }
        }
        return v1;
    }
};