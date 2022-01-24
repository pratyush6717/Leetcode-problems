class Solution {
public:
    //if we found a current character is alphabet then update that character to upper case
//and then by backtracking we change the character to lowercase.
//if the current charcter is number than left it as it is
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        solve(s,ans,0);
        return ans;
    }
    void solve(string S, vector<string>&ans,int i) {
        if(i == S.size()) { // base condition
            ans.push_back(S);
            return;
        }
        
        if(S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z') { // if the scanned character is alphabet
            S[i] = toupper(S[i]);
            cout<<S<<" ";
            solve(S,ans,i+1);
            S[i] = tolower(S[i]);
            cout<<S<<" ";
            solve(S,ans,i+1);
        }
        else { // if the scanned character is number
            cout<<S<<" ";
            solve(S,ans,i+1);
        }
    }
};