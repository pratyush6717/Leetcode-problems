// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&Kpos,vector<int>&Tpos,int N)
	{
	    // Code here
	    int dx[8] ={-1,1,-1,1,2,-2,2,-2};
	    int dy[8] ={-2,-2,2,2,-1,-1,1,1};
	    
	    queue<pair<int,int>> q;
	    q.push({Kpos[0] , Kpos[1]});
	    
	    int min_steps = 0;
	    
	    int vis[N+1][N+1];
	    memset(vis , 0 , sizeof(vis));
	    vis[Kpos[0]][Kpos[1]] = 1;
	    
	    while(!q.empty())
	    {
	        int sz = q.size();
	        while(sz--)
	        {
	            int x = q.front().first , y = q.front().second;
	            q.pop();
	            
	            if(x == Tpos[0] && y == Tpos[1])return min_steps;
	            
    	        for(int i = 0; i < 8; i++)
    	        {
    	            int nx = x+dx[i] , ny = y+dy[i];
    	            
    	            if(nx < 0 || ny < 0 || nx > N || ny > N || vis[nx][ny] == 1)continue;
    	            vis[nx][ny] = 1;
    	            q.push({nx , ny});
    	        }
	        }
	        min_steps++;
	    }
	    
	    return min_steps;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends