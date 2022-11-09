class StockSpanner {
public:
    
    vector<int> v;
    StockSpanner() {
        v.erase(v.begin(),v.end());
    }
    
    int next(int price) {
        v.push_back(price);
        int i=v.size()-1;
        int count=0;
        while(i>=0&&v[i]<=price){
            count++;
            i--;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */