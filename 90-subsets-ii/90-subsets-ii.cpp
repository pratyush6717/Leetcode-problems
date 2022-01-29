class Solution {
public:
     void solve(vector<int> nums,vector<int>op,vector<vector<int>>& res,set<vector<int>>&s){
        if(nums.size()==0){
            sort(op.begin(),op.end());
            if(!s.count(op)){
            res.push_back(op);
                s.insert(op);
            }
            return;
        }
        vector<int>op1=op;
        vector<int>op2=op;
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,op1,res,s);
        solve(nums,op2,res,s);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>op;
        set<vector<int>>s;
        solve(nums,op,res,s);
        return res;
    }
};