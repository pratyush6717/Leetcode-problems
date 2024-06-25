class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int carry=0;
        int flag=0;
        for(int i=n;i>=0;i--){
            int x=digits[i]+carry;
            if(flag==0){
            x=x+1;
            flag=1;
            }
            carry=x/10;
            x=x%10;
            
            digits[i]=x;
        }
        if(carry!=0){
            reverse(digits.begin(),digits.end());
            digits.push_back(carry);
            reverse(digits.begin(),digits.end());
        }
        return digits;
    }
};