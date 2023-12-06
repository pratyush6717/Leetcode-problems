class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product =1;
        int maxm_product=INT_MIN,maxm_product1=INT_MIN;
        for(int i=0;i<nums.size();i++){
            product=product*nums[i];
            maxm_product=max(product,maxm_product);
            if(product==0){
                product=1;
            }
        }
        product=1;

        for(int i=nums.size()-1;i>=0;i--){
            product=product*nums[i];
            maxm_product1=max(product,maxm_product1);
            if(product==0){
                product=1;//for in between zeroes
            }
        }
        
        return max(maxm_product,maxm_product1);
    }
};