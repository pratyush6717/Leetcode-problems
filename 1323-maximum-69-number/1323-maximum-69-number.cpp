class Solution {
public:
    int maximum69Number (int num) {
        int reverse=0;
        while(num>0){
            int x=num%10;
            reverse=reverse*10+x;
            num=num/10;
        }
        int flag=0,num1=0;
        while(reverse>0){
            int x=reverse%10;
            if(x==6&&flag==0){
                flag=1;
                x=9;
            }
            num1=num1*10+x;
            reverse=reverse/10;
        }
        return num1;
    }
};