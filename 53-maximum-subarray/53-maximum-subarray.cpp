class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxm=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            //cout<<sum<<endl;
            maxm=max(maxm,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxm;
    }
};