#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int srtart = 0, end = INT_MAX;
        int l = 0, r = 0;
        unordered_map<char,int> window; //记录当前窗口字符和对应的次数
        unordered_map<char,int> needs; // 记录t中的字符

        for(char c:t){
            needs[c]++;
        }
        int match = 0;

        while(r < s.size()){
            char c1 = s[right];
            if (needs.count(c1)){
                window[c1]++;
                if(window[c1] == needs[c1]){
                    match++;
                }
            }
            r++;

            while(match == needs.size()){
                if (r-l < end){
                    start = left;
                    end = r-l;
                }
                char c2 = s[l];
                if (needs.count(c2)){
                    window[c2]--;
                    if (window[c2] < needs[c2]){
                        match--;
                    }
                }
                l++;
            }
        }
        return end == INT_MAX ? "" : s.substr(start, end);
    }
};