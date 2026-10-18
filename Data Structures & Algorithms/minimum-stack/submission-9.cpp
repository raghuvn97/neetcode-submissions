class MinStack {
public:
    stack<int> s1;
    stack<int> min;
    
    MinStack() {
    }
    
    void push(int val) {
        s1.push(val);
        if(min.empty()) {
            min.push(val);
        } else {
            if(min.top() >= val) {
                min.push(val);
            }
        }
    }
    
    void pop() {
        if(min.top() == s1.top()) {
            min.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return min.top();
    }
};
