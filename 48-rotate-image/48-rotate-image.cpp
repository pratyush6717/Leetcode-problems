class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int>v;
       //i=0  -> j=n-1
       //i=1  -> j=n-2
       //i=2  -> j=n-3
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        int k=0;
        for(int j=matrix.size()-1;j>=0;j--){
            for(int i=0;i<matrix.size();i++){
                matrix[i][j]=v[k];
                k++;
            }
        }
        return;
    }
};