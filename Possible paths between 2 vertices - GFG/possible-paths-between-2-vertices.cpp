// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    void solve(int V, vector<int> adj[], int source, int destination,int& count,vector<int>vis){
        vis[source]=1;
        if(source==destination){
            count++;
        }
        for(auto it: adj[source]){
            if(vis[it]==0){
                solve(V,adj,it,destination,count,vis);
            }
        }
        vis[source]=0;
    }
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        int count=0;
        vector<int>vis(V+1,0);
        solve(V,adj,source,destination,count,vis);
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends