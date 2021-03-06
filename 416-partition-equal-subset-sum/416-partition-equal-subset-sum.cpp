class Solution {
public:
    bool subset(int n,vector<int>nums,int sum){
        int t[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0){
                    t[i][j]=0;
                }
                if(j==0){
                    t[i][j]=1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j] || t[i-1][j-nums[i-1]];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if(sum%2!=0){
            return false;
        }
            return subset(n,nums,sum/2);
        
    }
};