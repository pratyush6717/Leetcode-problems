class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        target=abs(target);
        int n=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
       
        int val=target;
        if((sum+val)%2!=0){
            return 0;
        }
        target=(sum+val)/2;
        int t[n+1][target+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=target;j++){
                if (i == 0)
				t[i][j] = 0;
			if (j == 0 ) {
				t[i][j] = 1;
            }
        }
    }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=target;j++){
                /*Because range of the sum includes 0.
Ex - If all the elements are 0 and we want a sum 0, for that we need j from 0. So that 0 can also be considered as sum of previous subset of i elements.*/
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][target];
    }
};