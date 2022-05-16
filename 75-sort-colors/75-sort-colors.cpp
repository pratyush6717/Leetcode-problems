class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            if(nums[i]==1){
                count1++;
            }
            if(nums[i]==2){
                count2++;
            }
        }
        int i=0;
        while(count>0){
            nums[i]=0;
            count--;
            i++;
        }
        while(count1>0){
            nums[i]=1;
            count1--;
            i++;
        }
        while(count2>0){
            nums[i]=2;
            count2--;
            i++;
        }
    }
};