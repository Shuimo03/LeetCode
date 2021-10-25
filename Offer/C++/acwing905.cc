#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> cnt;
        int ans = 0;
        for(char c : s){
            ++cnt[c];
        }
        for(auto p : cnt){
            int v = p.second;
            ans += v / 2*2;
            if(v % 2 == 1 && ans % 2 == 0){
                ++ans;
            }
        }
         return ans;
    }
};