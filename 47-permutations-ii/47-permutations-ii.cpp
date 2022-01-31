class Solution {
public:
     vector<vector<int>> myVec;
    
    // Backtracking
    void permutation(vector<int> &nums,int i,int n){
        if(i==n){
            myVec.push_back(nums);
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
        std::sort(myVec.begin(), myVec.end());
        myVec.erase(std::unique(myVec.begin(), myVec.end()), myVec.end());
        return myVec;
    }
};