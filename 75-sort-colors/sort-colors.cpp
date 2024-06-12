class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int i=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int x=it->first;
            int y=it->second;
            while(y>0){
                nums[i]=x;
                y--;
                i++;
            }
        }
    }
};