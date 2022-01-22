class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        int flag=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        if(count>1){
            flag=1;
        }
        int zeroproduct=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                continue;
            }
            zeroproduct=zeroproduct*nums[i];
        }
        int multipliedvalue=1;
        for(int i=0;i<nums.size();i++){
            multipliedvalue=multipliedvalue*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
            res.push_back(multipliedvalue/nums[i]);
            }
            else{
                if(flag==0){
                    res.push_back(zeroproduct);
                }
                else{
                res.push_back(0);
                }
            }
            }
        return res;
    }
};