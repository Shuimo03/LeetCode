#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    int a = 0, b = 1, sum;
    for(int i = 0; i < n; i++){
        sum = (a+b) % 1000000007;
        a = b;
        b = sum;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    cout << fib(fib(2)) << endl;
    return 0;
}
