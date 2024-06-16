class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        int i=0,j=0;
        string result="";
        while(i<n1||j<n2){
            if(i<n1){
            result=result+word1[i];
            i++;
            }
            if(j<n2){
            result=result+word2[j];
            j++;
            }
        }
        return result;
    }
};