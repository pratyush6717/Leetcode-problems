class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size()-1;
        if(nums[n]>nums[0]){
            return nums[0];
        }
        else{
            while(n>0){
                if(nums[n-1]>nums[n]){
                    return nums[n];
                }
                n--;
            }
        }
        return nums[0];
    }
};