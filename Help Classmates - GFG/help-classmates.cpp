// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> A, int n) 
    { 
        // Your code goes here
        int minm=INT_MAX;
    vector<int>sol;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i]){
                sol.push_back(A[j]);
                flag=1;
                break;
            }
        }
        if(flag==0){
            sol.push_back(-1);
        }
    }
    return sol;
    } 
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends