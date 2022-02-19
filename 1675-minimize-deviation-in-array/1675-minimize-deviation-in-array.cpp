class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        int minval=INT_MAX;
        for(int i=0;i<nums.size();i++){
                if(nums[i]%2!=0){
                    int x=nums[i]*2;
                    pq.push(x);
                    minval=min(minval,x);
                }
            else{
                pq.push(nums[i]);
                minval=min(minval,nums[i]);
            }
        }
        int diff=INT_MAX;
        while(!pq.empty() && pq.top()%2==0){
            int maxval=pq.top();
            pq.pop();
            diff=min(diff,maxval-minval);
            minval=min(minval,maxval/2);
            pq.push(maxval/2);
        }
        return min(diff,pq.top()-minval);
    }
};