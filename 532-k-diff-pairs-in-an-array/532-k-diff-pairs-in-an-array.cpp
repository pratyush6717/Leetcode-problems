class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<int>s;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            mp[nums[i]]++;
        }
        int count=0;
        if(k==0){
            for(auto it:mp){
                int x=it.second;
                if(x>1){
                    count++;
                }
            }
            return count;
        }
        for(auto it:s){
            int x=it;
            x=x+k;
            cout<<x<<endl;
            if(s.find(x)!=s.end()){
                count++;
            }
        }
        return count;
    }
};