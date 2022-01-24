class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int count=1,maxm=1;
        if(nums.empty()){
            return 0;
        }
        for(auto i=s.begin();i!=s.end();i++){
            int x=*i;
            if(s.count(x+1)){
                count++;
                maxm=max(maxm,count);
            }
            else{
                count=1;
            }
        }
        return maxm;
    }
};