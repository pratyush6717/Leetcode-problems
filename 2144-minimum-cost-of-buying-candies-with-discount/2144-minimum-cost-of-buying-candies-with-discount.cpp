class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int sum=0,j=0;
        for(int i=0;i<cost.size();i++){
            //cout<<cost[i]<<" ";
            sum=sum+cost[i];
            j++;
            //cout<<j<<" ";
            if(j>2){
                int res=cost[i-1]+cost[i-2];
                //cout<<res<<" ";
                if(res>cost[i]){
                    //i++;
                    j=0;
                    sum=sum-cost[i];
                }
                else{
                    j--;
                }
            }
        }
        return sum;
    }
};