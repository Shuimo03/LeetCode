#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        int odd = 0;
        //统计每个字符出现的次数
        unordered_map<char,int> cntMap;
        for(int i = 0; i < s.size(); i++){
            cntMap[s[i]]++;
        }
        
       for(auto cnt: cntMap){
           //出现偶数次的字母数向下取整
           int count = cnt.second;
           int rem = count%2;
           ans += count-rem;
           if(rem == 1){
            odd = 1;
           }
       }
        return ans+odd;
    }
};