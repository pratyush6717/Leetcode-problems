// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    string exercise(int N, int M, vector<vector<int>> A, int src, int dest, int X){
        // code here
           vector<vector<int>> graph(N, vector<int> (N, 0));
        
        for(int i = 0; i < A.size(); i++)
        {
            int u = A[i][0];
            int v = A[i][1];
            int d = A[i][2];
            
            graph[u][v] = d;
            graph[v][u] = d;
        }
        
        vector<int> dist(N, INT_MAX);
        dist[src] = 0;
        
        //vector<bool> visited(N, false);
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        pq.push({0, src});
        
        while(!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();
            
           // visited[u] = true;
            
            for(int v = 0; v < N; v++)
            {
                if(graph[u][v] != 0 )
                {
                    if(dist[v] > dist[u] + graph[u][v])
                    {
                        dist[v] = dist[u] + graph[u][v];
                        
                        pq.push({dist[v], v});
                    }
                }
            }
        }
        
        
        return dist[dest] > X ? "Neeman's Wool Joggers" : "Neeman's Cotton Classics";
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, M, src, dest, X;
        cin >> N >> M >> src >> dest >> X;
        vector<vector<int>> A(M, vector<int> (3, 0));
        for(int i = 0; i < M; i++){
            cin >> A[i][0] >> A[i][1] >> A[i][2];
        }
        Solution obj;
        cout << obj.exercise(N, M, A, src, dest, X) << "\n";
    }
}
  // } Driver Code Ends