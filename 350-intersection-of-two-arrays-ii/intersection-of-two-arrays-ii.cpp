class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        map<int,bool>vis;
        map<int,int>mp;
        map<int,int>mp1;
        for(int i=0;i<nums1.size();i++){
            vis[nums1[i]]=true;
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp1[nums2[i]]++;
        }
         for(int i=0;i<nums2.size();i++){
            if(vis[nums2[i]]==true){
                int x=mp[nums2[i]];
                int y=mp1[nums2[i]];
                x= min(x,y);
                while(x>0){
                res.push_back(nums2[i]);
                x--;
                }
                vis[nums2[i]]=false;
            }
        }
        return res;
    }
};