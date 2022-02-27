// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
void dfs(int x,vector<int>&vis,vector<int>adj[]){
       vis[x]=1;
       for(auto it:adj[x]){
           if(!vis[it]) dfs(it,vis,adj);
       }
   }
    vector<vector<int>> transitiveClosure(int n, vector<vector<int>> graph)
    {
        // code here
        vector<int>vis(n,0);
       vector<int>adj[n];
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(graph[i][j]){
                   adj[i].push_back(j);
                   //adj[j].push_back(i);
               }
           }
       }
       for(int i=0;i<n;i++){
           for(int k=0;k<n;k++)vis[k]=0;
           dfs(i,vis,adj);
           for(int j=0;j<n;j++){
               if(vis[j])graph[i][j]=1;
           }
       }
       return graph;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}  // } Driver Code Ends