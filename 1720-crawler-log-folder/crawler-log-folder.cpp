class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="./"){
                continue;
            }
            else if(logs[i]=="../"){
                if(st.size()>0){
                st.pop();
                }
            }
            else{
                st.push(logs[i]);
            }
        } 
        return st.size();
    }
};