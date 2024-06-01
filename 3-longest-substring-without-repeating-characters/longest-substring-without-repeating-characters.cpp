class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        set<char>st;
        int i=0,j=0,maxsize=0;
        while(j<s.size()){
            if(!st.count(s[j])){
                st.insert(s[j]);
                maxsize=max(maxsize,(int)st.size());
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxsize;
    }
};