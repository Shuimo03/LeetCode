#include<iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if(num == 0){
            return 0;
        }
        while(num >= 10){
            int sum = 0;
            while(num > 0){
                sum += num%10; //个位数
                num /= 10; // 十位数
            }
            num = sum;
        }
        return num;
    }
};