class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=0;
        int maxm_sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr_sum=curr_sum+nums[i];
            curr_sum=max(curr_sum,nums[i]);
             maxm_sum=max(maxm_sum,curr_sum);
           
        }
        return maxm_sum;

    }
};