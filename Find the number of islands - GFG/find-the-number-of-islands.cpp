// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<char,int>>q;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //cout<<grid[i][j]<<" "<<endl;
                if(grid[i][j]=='1'&&vis[i][j]==0){
                    //cout<<i<<" "<<j<<" "<<grid[i][j]<<endl;
                    q.push({i,j});
                    vis[i][j]=1;
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        if(x-1>=0&&grid[x-1][y]=='1'&&vis[x-1][y]==0){
                            vis[x-1][y]=1;
                            q.push({x-1,y});
                        }
                        if(y-1>=0&&grid[x][y-1]=='1'&&vis[x][y-1]==0){
                            vis[x][y-1]=1;
                            q.push({x,y-1});
                        }
                        if(x+1<n&&grid[x+1][y]=='1'&&vis[x+1][y]==0){
                            vis[x+1][y]=1;
                            q.push({x+1,y});
                        }
                        if(y+1<m&&grid[x][y+1]=='1'&&vis[x][y+1]==0){
                            vis[x][y+1]=1;
                            q.push({x,y+1});
                        }
                        if(x-1>=0&&y-1>=0&&grid[x-1][y-1]=='1'&&vis[x-1][y-1]==0){
                            vis[x-1][y-1]=1;
                            q.push({x-1,y-1});
                        }
                        if(y-1>=0&&x+1<n&&grid[x+1][y-1]=='1'&&vis[x+1][y-1]==0){
                            vis[x+1][y-1]=1;
                            q.push({x+1,y-1});
                        }
                        if(x-1>=0&&y+1<m&&grid[x-1][y+1]=='1'&&vis[x-1][y+1]==0){
                            vis[x-1][y+1]=1;
                            q.push({x-1,y+1});
                        }
                        if(y+1<m&&x+1<n&&grid[x+1][y+1]=='1'&&vis[x+1][y+1]==0){
                            vis[x+1][y+1]=1;
                            q.push({x+1,y+1});
                        }
                        
                    }
                    count++;
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends