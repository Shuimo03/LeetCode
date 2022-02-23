#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        if(s.size() == 0){
            return "";
        }
        int size = s.size();
        int l = 0, r = size-1;
        while(true){
            //判断左边是否扫描到字母
            while(l < r && !isalpha(s[l])){
                l++;
            }
            //判断右边师傅扫描到字母
            while(r > l && !isalpha(s[r])){
                r--;
            }
            if(l >= r){
                break;
            }
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};