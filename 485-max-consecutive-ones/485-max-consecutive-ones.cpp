class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxm=INT_MIN,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                maxm=max(maxm,count);
                count=0;
            }
            else{
                count++;
                maxm=max(maxm,count);
            }
            
        }
        return maxm;
    }
};