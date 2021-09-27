#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
class Foo {
    mutex mtx1,mtx2;
public:
    Foo() {
        mtx1.lock(),mtx2.lock();
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        mtx1.lock();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        mtx1.lock();
        printSecond();
        mtx1.unlock();
        mtx2.unlock();
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        mtx2.lock();
        printThird();
        mtx2.unlock();
    }
};