#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

class MyQueue {
public:
    stack<int> input,output;
    MyQueue() {
    }
    void push(int x) {
        MyQueue::input.push(x);
    }
    int pop() {
        int x=peek();
        MyQueue::output.pop();
        return x;
    }
    int peek() {
        if(!MyQueue::output.empty()){
            return MyQueue::output.top();
        }
        else{
            while(!MyQueue::input.empty()){
                MyQueue::output.push(MyQueue::input.top());
                MyQueue::input.pop();
            }
        }
        return MyQueue::output.top();
    }
    bool empty() {
        return input.empty() && output.empty();
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