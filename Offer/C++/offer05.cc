#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        for(int i =0; i < s.size(); i++){
            if(s[i] == ' '){
                int len = s.size();
                s = s.substr(0,i)+"%20"+s.substr(i+1,i-len-1);
            }
        }
        return s;
    }
};