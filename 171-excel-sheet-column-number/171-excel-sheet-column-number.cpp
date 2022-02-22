class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            v.push_back(pow(26,i));
        }
        int res=0;
        for(int i=0;i<n;i++){
            int x=columnTitle[i]-64;
            //cout<<x<<endl;
            res=res+x*v[i];
        }
        return res;
    }
};