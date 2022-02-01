class Solution {
public:
    void solve(int& n,vector<int>&op,vector<vector<int>>& res,int& k,int start,vector<int> &vis){
        if(op.size()==k){
            res.push_back(op);
            return;
        }
        for(int i=start;i<=n;i++){
            if(vis[i]==-1){
                if(op.size()==0){
                    op.push_back(i);
                }
                else{
                int x=op.back();
                if(i>x){
            op.push_back(i);
                }
                    else{
                        continue;
                    }
                }
                vis[i]=1;
            solve(n,op,res,k,start+1,vis);
                vis[i]=-1;
            op.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int>op;
        vector<int> vis(n+1,-1);
        solve(n,op,res,k,1,vis);
        return res;  
    }
};