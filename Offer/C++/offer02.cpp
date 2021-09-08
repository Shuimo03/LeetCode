#include<limits.h>
using namespace std;
class Solution {
public:
    int divide(int a, int b) {
        if(a == INT_MIN && b == -1){
            return INT_MAX;
        }

        int negative = 2;
        if(a > 0){
            negative--;
            a = -a;
        }
        if(b > 0){
            negative--;
            b = -b;
        }
        unsigned int ret = divideCore(a,b);
        return negative == 1 ? -ret : ret;
    }

    unsigned int divideCore(int a ,int b){
        int ret = 0;
        while (a<=b)
        {
           int value = b;
           unsigned int quo = 1;
           while(value >= 0xc0000000 && a <= value+value){
               quo += quo;
               value+= value;
           }
           ret += quo;
           a -= value;
        }
        return ret;
        
    }
};