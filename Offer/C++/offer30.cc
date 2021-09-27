#include<iostream>
#include<stack>
using namespace std;


class MinStack {
    stack<int> s1;
    stack<int> s2;
public:
    /** initialize your data structure here. */
    MinStack() {
        s2.push(INT_MAX);
    }

    void push(int x){
        s1.push(x);
        s2.push(min(s2.top(),x));
    }

    void pop(){
        s1.pop();
        s2.pop();
    }

    int top(){
        return s1.top();
    }

    int min(){
        return s2.top();
    }
};