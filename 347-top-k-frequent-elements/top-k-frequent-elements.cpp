class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push(make_pair(it->second,it->first));
        }
        vector<int>v;
        while(k--){
            pair<int,int>element=pq.top();
            pq.pop();
            //cout<<element.first<<" "<<element.second<<endl;
            v.push_back(element.second);
        }
        return v;
    }
};