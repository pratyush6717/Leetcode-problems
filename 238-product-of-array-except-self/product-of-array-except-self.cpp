class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long res=1;
        int count=0;
        int negative=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negative=negative*(-1);
            }
            if(nums[i]==0){
                count++;
            }
            else{
                res=res*abs(nums[i]);
            }
        }
        res=res*negative;
        vector<int>ans;
        if(count==0){
        for(int i=0;i<nums.size();i++){
            unsigned long long int val=res/nums[i];
            ans.push_back(val);
            }    
        }
        if(count==1){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            ans.push_back(res);
                }    
            else{
                ans.push_back(0);
                }
            }
        }
        if(count>1){
        for(int i=0;i<nums.size();i++){
            ans.push_back(0);
        }    
    }
    return ans;
    }
};