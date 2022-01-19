class Solution {
public:
    int myAtoi(string s) {
      stringstream geek(s);
        int x = 0;
    geek >> x;
        return x;
    }
};