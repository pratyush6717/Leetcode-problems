class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>s;
    void push(int x) {
        s.push(x); 
    }
    
    
    int pop() {
        stack<int>dummy;
        while(!s.empty()){
            int y=s.top();
            s.pop();
            dummy.push(y);
        }
        int z=dummy.top();
        dummy.pop();
        while(!dummy.empty()){
            int y=dummy.top();
            dummy.pop();
            s.push(y);
        }
        return z;
    }
    
    int peek() {
        stack<int>dummy;
        while(!s.empty()){
            int y=s.top();
            s.pop();
            dummy.push(y);
        }
        int z=dummy.top();
        while(!dummy.empty()){
            int y=dummy.top();
            dummy.pop();
            s.push(y);
        }
        return z;
    }
    
    bool empty() {
        if(s.size()==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */