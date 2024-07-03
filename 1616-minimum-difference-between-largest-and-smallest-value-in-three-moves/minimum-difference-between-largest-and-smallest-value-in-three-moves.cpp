class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums.size()<=4){
            return 0;
        }
        int n=nums.size()-1;
        return min({(nums[0]-nums[n-3]),(nums[1]-nums[n-2]),(nums[2]-nums[n-1]),(nums[3]-nums[n])});
    }
};