class Solution {
public:
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    vector<vector<int>> ans;
    //vector<int> vis(nums.size(),-1);
    //nsf --> number/candidate taken so far
    //ssf --> sum so far
    //fn --> final no of candidates/number to use
    //fs -->final sum
    void backtrack(vector<int> &temp,int nsf,int ssf,int &fn,int &fs,int start){
        if(nsf==fn && ssf==fs){
            ans.push_back(temp);
            return;
        }
        else if(nsf>fn || ssf>fs){
            return;
        }
        for(int i=start;i<nums.size();i++){
            if(ssf+nums[i]<=fs && nsf+1<=fn){
                temp.push_back(nums[i]);
                backtrack(temp,nsf+1,ssf+nums[i],fn,fs,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
          backtrack(temp,0,0,k,n,0);
        return ans;
    }
};