class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>mp;
        int res=0;
        for(int i=0;i<words.size();i++){
            string revstr=words[i];
            string str=words[i];
            reverse(revstr.begin(),revstr.end());
            if(mp[revstr]>0){
                res+=4;
                mp[revstr]--;
            }
            else{
                mp[str]++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            string str=it->first;
            int x=it->second;
            if(str[0]==str[1]&&x>0){
                return res+2;
            }
        }
        return res;
    }
};