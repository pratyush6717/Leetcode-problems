class Solution {
public:
   vector<int> ans;
    void dfs(int i,int j,vector<vector<int>> &grid,int startingIndex){
        
        if(i==grid.size()){
            ans[startingIndex]=j;
            return;
        }
        
        if(grid[i][j]==1){
            if(j+1<grid[0].size() && grid[i][j+1]==1){
                dfs(i+1,j+1,grid,startingIndex);
            }
           
        }
        else if(grid[i][j]==-1){
            if(j-1>=0 && grid[i][j-1]==-1){
                dfs(i+1,j-1,grid,startingIndex);
            }
        }
        
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        
        ans.resize(grid[0].size(),-1);
        for(int j=0;j<grid[0].size();j++){
            dfs(0,j,grid,j);
            // cout<<endl;
        }
        return ans;
        
    }
};