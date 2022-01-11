class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q;
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int n=q.size();
        for(int i=0;i<n-1;i++){
            int y=q.front();
            q.pop();
            q.push(y);
        }
        int top=q.front();
        q.pop();
        return top;
    }
    
    int top() {
        int n=q.size();
        for(int i=0;i<n-1;i++){
            int y=q.front();
            q.pop();
            q.push(y);
        }
        int top=q.front();
         q.pop();
            q.push(top);
        return top;
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }
        return false;
    }
    
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */