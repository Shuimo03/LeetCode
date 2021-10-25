#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strToInt(string str) {
        long res = 0;
        int indicator = 1;
        
        for(int i = 0; i <str.size();){
            i = str.find_first_not_of(' ');
            if(str[i] == '-' || str[i] == '+'){
                indicator = (str[i++] == '-')?-1:1;
            }
            while('0' <= str[i] && str[i] <= '9'){
                res = res*10+(str[i++]-'0');
                if(res*indicator >= INT_MAX) return INT_MAX;
                if(res*indicator <= INT_MIN) return INT_MIN;
            }
            return res*indicator;
        }
    }
};