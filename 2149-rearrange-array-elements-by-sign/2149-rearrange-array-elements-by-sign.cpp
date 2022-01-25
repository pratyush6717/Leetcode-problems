class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                    pos.push_back(nums[i]);
            }
        }
        int i=0,j=0,flag=0;
        for(int k=0;k<nums.size();k++){
            if(flag==0){
                nums[k]=pos[i];
                i++;
                flag=1;
            }
            else{
                nums[k]=neg[j];
                j++;
                flag=0;
            }
        }
        return nums;
    }
};