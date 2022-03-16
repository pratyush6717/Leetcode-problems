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
        int k=1;
        t[0][0] = 1;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=target;j++){
                if (i == 0 && j > 0)
				t[i][j] = 0;
			if (j == 0 && i > 0) {
				if (nums[i - 1] == 0) {
					t[i][j] = pow(2, k);
					k++;
				}
				else
					t[i][j] = t[i - 1][j];
			}
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
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