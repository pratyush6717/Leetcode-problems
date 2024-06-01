class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        int i=0,j=0,maxlength=0;
        set<char>st;
        while(j<s.length()){
            if(!st.count(s[j])){
                st.insert(s[j]);
                maxlength=max(maxlength,(int)st.size());
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxlength;
    }
};