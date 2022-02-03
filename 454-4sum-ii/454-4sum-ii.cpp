class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
         int n=nums1.size();
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[nums1[i]+nums2[j]]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val=0-(nums3[i]+nums4[j]);
                int x=mp[val];
                count=count+x;
            }
        }
        return count;
    }
};