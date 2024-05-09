class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=1;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            prod=prod*nums[i];
            //prod=max(prod,nums[i]);
            res=max(res,prod);
            if(prod==0){
                prod=1;
            }
        }
        reverse(nums.begin(),nums.end());
        prod=1;
        for(int i=0;i<nums.size();i++){
            prod=prod*nums[i];
            //prod=max(prod,nums[i]);
            res=max(res,prod);
            if(prod==0){
                prod=1;
            }
        }
        return res;
    }
};