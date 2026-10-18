class MinStack {
    public Stack<Integer> st;
    public Stack<Integer> min;
    public MinStack() {
        st = new Stack<>();
        min = new Stack<>();
    }
    
    public void push(int val) {
        st.add(val);
        if(min.empty()) {
            min.add(val);
        } else {
            if(min.peek() >= val) {
                min.add(val);
            }
        }
    }
    
    public void pop() {
    if (st.empty()) return;
    int top = st.peek(); // get the value first
    st.pop(); // then pop it
    if (top == min.peek()) {
        min.pop();
    }
}
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        return min.peek();
    }
}
