#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
     string store;
     //过滤字符串,保留数字和字符串
        for(char ch:s){
            if(isalnum(ch)){
                store += ch;
            }
        }

        int n = store.size();
        int l = 0,r = n-1;
        while(l < r){
            if(store[l] != store[r]){
                return false;
            }
            l++;
            r--;        
        }
        return true;
    }
};