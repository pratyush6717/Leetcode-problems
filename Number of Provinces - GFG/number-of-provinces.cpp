// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(int i,vector<int>& vis,vector<vector<int>> adj){
      vis[i]=1;
      for(int j=0;j<adj[i].size();j++){
          if(!vis[j]&&adj[i][j]){
              dfs(j,vis,adj);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int>vis(V,0);
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
            dfs(i,vis,adj);
            count++;
        }
    }
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}  // } Driver Code Ends