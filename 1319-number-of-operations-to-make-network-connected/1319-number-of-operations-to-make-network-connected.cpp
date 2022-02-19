class Solution {
public:
   void dfs(int node, vector<int> &vis, vector<int> adj[]) {
        vis[node] = 1; 
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, adj); 
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>vis(n+1,0);
        vector<int> adj[n];
        int edges=0;
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
            edges += 1;
        }
        int components = 0;
        for(int i=0;i<n;++i)
            if(!vis[i]) 
            {
                components +=1;
                dfs(i, vis, adj);
            }
        if(edges < n-1) 
            return -1;
        int redundant = edges-((n-1)-(components-1));  
        if(redundant >= (components-1)) 
            return components-1;
        return -1;
    }
};