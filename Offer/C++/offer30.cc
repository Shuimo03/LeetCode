#include<iostream>
#include<stack>
using namespace std;


class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    stack<int>s1;
    stack<int>s2;
    void push(int x) {
        s1.push(x);
        if(s1.empty() || x <= s1.top()){
            s2.push(x);
        }
    }
    
    void pop() {
        if(s1.top() == s2.top()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int min() {
        return s2.top();
    }
};