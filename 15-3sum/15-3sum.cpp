class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int target = 0 - nums[i];
                int front = i + 1;
                int back = n - 1;
                while(front < back) {
                    int two_sum = nums[front] + nums[back];
                    if (two_sum < target) front++;
                    else if (two_sum > target) back--;
                    else {
                        vector<int> quadruplet(3, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[front];
                        quadruplet[2] = nums[back];
                        res.push_back(quadruplet);
                        while (front < back && nums[front] == quadruplet[1]) ++front;
                        while (front < back && nums[back] == quadruplet[2]) --back;
                     }
                }
             while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
         
        return res;
    }
};