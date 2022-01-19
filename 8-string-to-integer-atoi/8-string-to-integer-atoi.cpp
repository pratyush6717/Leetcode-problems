class Solution {
public:
    int myAtoi(string s) {
        string res="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>='0'){
                while(s[i]!=' '&& i<s.size()){
                    res=res+s[i];
                    i++;
                }
                break;
            }
        }
      stringstream geek(s);
        int x = 0;
    geek >> x;
//        int x = res[0]-48;
  //cout<<res;
        return x;
    }
};