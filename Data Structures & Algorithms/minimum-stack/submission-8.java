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
        if(st.empty()) return;
        if(st.pop().equals(min.peek())) {
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
