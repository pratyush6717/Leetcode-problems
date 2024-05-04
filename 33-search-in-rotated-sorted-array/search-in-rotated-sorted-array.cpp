class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        if(nums[n]>nums[0]){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==target){
                    return i;
                }
            }
        }
        else{
            while(n>0){
                if(nums[n]==target){
                    return n;
                }
                n--;
            }
        }
        if(nums[0]==target){
        return 0;
        }
        return -1;
    }
};