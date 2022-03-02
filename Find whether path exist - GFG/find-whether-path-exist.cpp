// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&vis[i][j]==0){
                    q.push({i,j});
                    vis[i][j]=1;
                    break;
                }
            }
        }
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            //cout<<grid[x][y]<<endl;
            if(grid[x][y]==2){
                return true;
            }
            if(x-1>=0&&(grid[x-1][y]==3||grid[x-1][y]==2)&&vis[x-1][y]==0){
                            vis[x-1][y]=1;
                            q.push({x-1,y});
                        }
            if(y-1>=0&&(grid[x][y-1]==3||grid[x][y-1]==2)&&vis[x][y-1]==0){
                            vis[x][y-1]=1;
                            q.push({x,y-1});
                        }
            if(x+1<n&&(grid[x+1][y]==3||grid[x+1][y]==2)&&vis[x+1][y]==0){
                            vis[x+1][y]=1;
                            q.push({x+1,y});
                        }
            if(y+1<m&&(grid[x][y+1]==3||grid[x][y+1]==2)&&vis[x][y+1]==0){
                            vis[x][y+1]=1;
                            q.push({x,y+1});
                        }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends