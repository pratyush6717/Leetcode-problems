class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxm=0,minprice=INT_MAX;
        for(int i=0;i<prices.size();i++){
                minprice=min(minprice,prices[i]);
                maxm=max(maxm,prices[i]-minprice);
           
        }
        return maxm;
    }
};