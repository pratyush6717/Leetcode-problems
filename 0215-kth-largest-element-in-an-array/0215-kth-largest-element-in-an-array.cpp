class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int,greater<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int res;
        for(auto it=mp.begin();it!=mp.end(),k>0;it++){
             res=it->first;
            int y=it->second;
            //cout<<res<<endl;
            k-=y;
        }
        return res;
    }
};