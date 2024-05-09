class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int res=0;
        int flag=0;
        int maxm=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                flag=1;
            }
            maxm=max(maxm,nums[i]);
        }
        if(flag==0){
            return maxm;
        }
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            res=max(res,sum);
            if(sum<0){
                sum=0;
            }
        }
        return res;
    }
};