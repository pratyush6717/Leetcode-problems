class Solution {
public:
     vector<vector<int>> myVec;
    set<vector<int>>s;
    void permutation(vector<int> &nums,int i,int n){
        if(i==n&&!s.count(nums)){
            myVec.push_back(nums);
            s.insert(nums);
            return ;
        }

        for(int j=i;j<=n;j++){
            swap( nums[i],nums[j]);
            permutation(nums,i+1,n);
            swap( nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permutation(nums,0,nums.size()-1);
         return myVec;
    }
};