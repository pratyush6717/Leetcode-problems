class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int y=x;
        long long int z=0;
        while(y!=0){
            long long int rem=y%10;
            z=z*10+rem;
            y=y/10;
        }
        if(z==x){
            return true;
        }
        return false;
    }
};