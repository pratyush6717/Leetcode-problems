class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int n1=t.size();
        int i=0;
        int j=0;
        while(i<n&&j<n1){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i==n){
            return true;
        }
            return false;
        
    }
};