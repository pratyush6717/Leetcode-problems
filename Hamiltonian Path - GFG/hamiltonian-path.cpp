// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    bool dfs(int num,int c,vector<int> arr[],int n,int m, vector<int>& visit)
    {
        if(c==n)
        {
            return true;
        }
        visit[num] = 1;
        for(auto x : arr[num])
        {
            if(!visit[x])
            {
                if(dfs(x,c+1,arr,n,m,visit))
                 return true;
            
            }
        }
        visit[num] = 0;
        return false;
    }
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        vector<int> adj[N+1];
        for(auto x : Edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
       vector<int> visit(N+1,0);
       
       for(int i=1;i<=N;i++)
       {
           if(dfs(i,1,adj,N,M,visit)){
               return true;
           }
       }
     
        return false;
    }
};
 

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}  // } Driver Code Ends