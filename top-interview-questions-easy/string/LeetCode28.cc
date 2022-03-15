#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int haystackSize = haystack.size();
        int needleSize = needle.size();

        for(int i = 0; i+needleSize <= haystackSize; i++){
            bool flag = true;
            for(int j = 0; j < needleSize; j++){
                if(haystack[i+j] != needle[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
        return -1;
    }
};