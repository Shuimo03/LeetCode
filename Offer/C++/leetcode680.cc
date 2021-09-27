#include<iostream>
#include<string>
#include<algorithm>

class Solution {
public:
    bool validPalindrome(string s) {
        int size = s.size();
        int l = 0;
        int r = size-1;
        while(l < r){
            if(s[l] != s[r]){
                return isvalid(s,l+1,r) || isvalid(s,l,r-1);
            }
            l++;
            r--;
        }
        return true;
    }
    bool isvalid(string& s,int l, int r){
        while(l < r){
            if (s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};