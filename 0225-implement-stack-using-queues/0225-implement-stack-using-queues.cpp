class MyStack {
     queue <int> s;
public:
    MyStack() {
    }
    
    void push(int x) {
        int n=s.size();
        s.push(x);
        

        for(int i=0;i<n;i++){
            int store= s.front();
            s.pop();
            s.push(store);
        }
    }
    
    int pop() {
       int y= s.front();
       s.pop();
       return y;
    }
    
    int top() {
        return s.front();
    }
    
    bool empty() {
       return s.empty();
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

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna