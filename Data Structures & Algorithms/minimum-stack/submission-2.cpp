class MinStack {
public:
    stack<long long> st;
    long long mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mini>=val){
            st.push(2LL*val-mini);
            mini=val;
        }
        else{
            st.push(val);
        }
    }
    
    void pop() {
        if(st.top()<mini){
            mini=2*mini-st.top();
            st.pop();
        }
        else{
            st.pop();
        }
    }
    
    int top() {
        if(st.top()<mini){
            return mini;
        }
        else{
            return st.top();
        }
    }
    
    int getMin() {
        return mini;
    }
};
