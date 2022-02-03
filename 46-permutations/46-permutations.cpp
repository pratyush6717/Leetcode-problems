class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int>& nums,int l,int r){
        if(l==r){
            res.push_back(nums);
        }
        else{
            for(int i=l;i<=r;i++){
                swap(nums[l],nums[i]);
                solve(nums,l+1,r);
                swap(nums[l],nums[i]);
            }
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        solve(nums,0,n-1);
        return res;
    }
};