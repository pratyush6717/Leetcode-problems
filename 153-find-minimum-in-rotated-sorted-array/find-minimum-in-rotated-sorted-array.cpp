class Solution {
public:
void pop_front(vector<int>& nums,int root){
    nums.erase(nums.begin()+root);
}
    int findMin(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[0]>nums[n-1]){
            int x=nums[0];
            nums.push_back(x);
            pop_front(nums,0);
            }
        }
        return nums[0];
    }
};