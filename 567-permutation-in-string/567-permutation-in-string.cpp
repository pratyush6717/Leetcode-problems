class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        int n=s1.size();
        sort(s1.begin(),s1.end());
        //cout<<s1<<" ";
        for(int i=0;i<s2.size()-n+1;i++){
            string s;
            int k=i;
            for(int j=0;j<n;j++){
                s.push_back(s2[k]);
                k++;
            }
            sort(s.begin(),s.end());
           // cout<<s<<endl;
            if(s==s1){
                return true;
            }
        }
        return false;
    }
};