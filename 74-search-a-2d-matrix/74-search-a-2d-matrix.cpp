class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        //cout<<n<<" "<<m<<endl;
        int index=0;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==target){
                return true;
            }
            if(matrix[i][0]>target){
                index=i-1;
                break;
            }
            index=i;
        }
        if(index<0){
            return false;
        }
        for(int i=0;i<m;i++){
            if(matrix[index][i]==target){
                return true;
            }
        }
        
        return false;
    }
};