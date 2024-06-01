class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int>v;
        while(x>0){
            int rem=x%10;
            v.push_back(rem);
            x=x/10;
        }
         vector<int>v1=v;
         reverse(v1.begin(),v1.end());
         return(v==v1);
    }
};