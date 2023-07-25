#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
class MinStack {
    stack<long long>st;
    long long mini;
public:
    MinStack() {
        mini  = INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()) {
            st.push(val);
            mini=val;
        }
        else if(mini>val){
            long long a = (val -mini) + val;
            st.push(a);
            mini = val;
        }
        else {
            st.push(val);
        }
    }
    
    void pop() {
        if(st.empty()) return;
        else if(st.top()<mini){
            mini = 2*mini - st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        if(st.top()<mini){
            return mini;
        }
        return st.top();
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */