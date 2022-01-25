class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxm=INT_MIN;
        int minm=INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxm=max(maxm,nums[i]);
            minm=min(minm,nums[i]);
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>minm&&nums[i]<maxm){
               count++;
           }
        }
        return count;
    }
};