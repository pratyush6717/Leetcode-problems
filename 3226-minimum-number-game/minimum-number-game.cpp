class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            swap(nums[i],nums[i+1]);
            i++;
        }
        return nums;
    }
};