class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            int target=0-nums[i];
            int front=i+1;
            int back=n-1;
            while(front<back){
                int two_sum=nums[front]+nums[back];
                if(two_sum<target){
                    front++;
                }
                else if(two_sum>target){
                    back--;
                }
                else{
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[front]);
                    v.push_back(nums[back]);
                    ans.push_back(v);
                    while (front < back && nums[front] == v[1]) ++front;
                    while (front < back && nums[back] == v[2]) --back;
                }
            }
            while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return ans;
    }
};