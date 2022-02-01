class Solution {
public:
    set<vector<int>>s;
    void solve(vector<vector<int>>& res,vector<int>& nums,int l,int r){
        if(l==r&&!s.count(nums)){
            res.push_back(nums);
            s.insert(nums);
        }
        else{
            for(int i=l;i<=r;i++){
                swap(nums[l],nums[i]);
                solve(res,nums,l+1,r);
                swap(nums[l],nums[i]);
            }
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        solve(res,nums,0,n-1);
        return res;
    }
};