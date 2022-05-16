class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        
        for(int i=0;i<numRows;i++){
            vector<int>val;
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    val.push_back(1);
                }
                else{
                    val.push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
            res.push_back(val);
        }
        return res;
    }
};