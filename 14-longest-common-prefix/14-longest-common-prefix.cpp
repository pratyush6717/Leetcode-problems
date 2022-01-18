class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(int i=1;i<strs.size();i++){
            string ans="";
            string str=strs[i];
            for(int j=0;j<str.size();j++){
                if(str[j]==res[j]){
                    ans=ans+res[j];
                }
                else {
                    break;
                }
            }
            res=ans;
        }
        return res;
    }
};