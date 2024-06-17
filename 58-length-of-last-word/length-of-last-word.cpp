class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        int count=0;
        int flag=0;
        for(int i=n;i>=0;i--){
            if(s[i]==' '&& flag==1){
                break;
            }
            else if (s[i]!=' '){
                flag=1;
                //cout<<s[i]<<endl;
                count++;
            }
        }
        return count;
    }
};