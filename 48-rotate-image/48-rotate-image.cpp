class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int> res;
        int n=matrix.size();
        int i=0,j=n-1;
        while(i<n){
            for(int k=0;k<n;k++){
                res.push_back(matrix[i][k]);
            }
            i++;
        }
         i=0;
        while(j>=0){
            for(int k=0;k<n;k++){
                matrix[k][j]=res[i];
                i++;
            }
            j--;
        }
    }
};