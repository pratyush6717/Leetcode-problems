class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<int>bfs;
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        queue<pair<int,int>>q;
        q.push({sr,sc});
        vis[sr][sc]=1;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int i=it.first;
            int j=it.second;
            if(i-1>=0&&image[i-1][j]==image[i][j]&&vis[i-1][j]==0){
                vis[i-1][j]=1;
                q.push({i-1,j});
            }
            if(j-1>=0&&image[i][j-1]==image[i][j]&&vis[i][j-1]==0){
                vis[i][j-1]=1;
                q.push({i,j-1});
            }
            if(i+1<n&&image[i+1][j]==image[i][j]&&vis[i+1][j]==0){
                vis[i+1][j]=1;
                q.push({i+1,j});
            }
            if(j+1<m&&image[i][j+1]==image[i][j]&&vis[i][j+1]==0){
                vis[i][j+1]=1;
                q.push({i,j+1});
            }
            image[i][j]=newColor;
        }
        return image;
    }
};