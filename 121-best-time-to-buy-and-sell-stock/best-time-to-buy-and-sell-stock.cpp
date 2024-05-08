class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm=prices[0];
        int maxm=prices[0];
        int res=0;
        for(int i=0;i<prices.size();i++){
            minm=min(minm,prices[i]);
            if(prices[i]>=minm){
                res=max(res,prices[i]-minm);
            }
        }
        return res;
    }
};