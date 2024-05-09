class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            sum=max(sum,nums[i]);
            res=max(res,sum);
        }
        return res;
    }
};