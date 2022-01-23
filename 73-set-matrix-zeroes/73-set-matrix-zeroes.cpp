class Solution {
public:
    void update(vector<vector<int>>& matrix,int i,int j){
        for(int k=0;k<matrix.size();k++){
            matrix[k][j]=0;
        }
        for(int k=0;k<matrix[0].size();k++){
            matrix[i][k]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row;
        vector<int>col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    cout<<i<<' '<<j;
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i=0;i<row.size();i++){
            update(matrix,row[i],col[i]);
        }
    }
};