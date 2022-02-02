class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &nums,vector<int> &temp,int &sum,int currsum,int start){
        if(currsum==sum){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }
            if((currsum + nums[i])<=sum){
                temp.push_back(nums[i]);
                solve(nums,temp,sum,currsum+nums[i],i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& num, int target) {
         vector<int> temp;
        int currsum=0;
        sort(num.begin(),num.end());
         solve(num,temp,target,currsum,0);
        return ans;
    }
};