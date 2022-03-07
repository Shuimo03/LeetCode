#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0){
            return "0";
        }
        bool isNegative = num < 0; // 负数
        num = abs(num); // 取绝对值
        string res;
        while(num > 0){
            res.push_back(num%7+'0');
            num /= 7;
        }
        if(isNegative){
            res.push_back('-');
        }
        reverse(res.begin(),res.end());
        return res;
    }
};