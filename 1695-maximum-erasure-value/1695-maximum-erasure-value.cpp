class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
         int curr_sum=0, res=0;
        unordered_set<int> st;
        int i=0,j=0;
        while(i<nums.size()) {
            while(st.count(nums[i])>0) {
                st.erase(nums[j]);
                curr_sum-=nums[j];
                j++;
            }
			curr_sum+=nums[i];
            st.insert(nums[i]);
            i++;
			res = max(res, curr_sum);
        }
        
        return res;
    }
};