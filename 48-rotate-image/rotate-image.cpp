class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int>v;
        int n=matrix.size()-1;
        int m=matrix[0].size()-1;
        int k=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                 v.push_back(matrix[i][j]);
            }
        }
        for(int i=m;i>=0;i--){
            for(int j=0;j<=n;j++){
                //cout<<j<<i<<endl;
                 matrix[j][i]=v[k];
                  k++;
            }
        }
        
        //00 02
        //01 12
        //02 22
        //10 01
        //11 11
        //12 21
        //20 00
        //21 10
        //22 20
    return;

    }
};