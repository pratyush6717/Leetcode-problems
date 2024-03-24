class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int res=nums[i]^nums[i+1];
            if(res==0){
                return nums[i];
            }
        }
        return 0;
    }
};