#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(), l,r = n-1;
        string ret;

        while(r >= 0){
            while(r >= 0 && s[r] == ' ')--r;
            if(r < 0) break;
            for(l = r; l >= 0 && s[l] != ' '; --l);
            ret += (s.substr(l+1,r-l)+" ");
            r = l;
        }
        if(ret.size()) ret.pop_back();
        return ret;
    }
};