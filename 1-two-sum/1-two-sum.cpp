class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0,first=0,second=0,flag;
        for(int i=0;i<nums.size();i++){
            flag=0;
            sum=target-nums[i];
            first=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==sum){
                        second=j;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        vector<int>v;
        v.push_back(first);
        v.push_back(second);
        return v;
    }
};