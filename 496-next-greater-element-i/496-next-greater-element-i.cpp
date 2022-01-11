class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums2.size();i++){
            int flag=0;
           for(int j=i+1;j<nums2.size();j++){
               if(nums2[j]>nums2[i]){
                   mp[nums2[i]]=nums2[j];
                   flag=1;
                   break;
               }
           }
            if(flag==0){
            mp[nums2[i]]=-1;
            }
        }
        for(int i=0;i<nums1.size();i++){
            int x=mp[nums1[i]];
            v.push_back(x);
        }
        return v;
    }
};