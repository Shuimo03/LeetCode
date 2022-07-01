#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
        int res = 0;
        int record[26];
        for(int i = 1; i <= 26; i++){
            memset(record, 0, sizeof(record));
            int l = 0, r = 0;
            int diff_cnt = 0,cnt = 0;
            while(r < s.size()){
                int add_index = s[r]-'a';
                record[add_index] += 1;
                if(record[add_index] == 1){
                    diff_cnt++;
                }
                if (record[add_index] == k){
                    cnt++;
                }
                r++;

                while(l < r && diff_cnt > i){
                    int del_index = s[l]-'a';
                    if(record[del_index] == k){
                        cnt--;
                    }
                    if(record[del_index] == 1){
                        diff_cnt--;
                    }
                    record[del_index] -= 1;
                    l++;
                 }
                 if(diff_cnt == i && diff_cnt == cnt){
                    res = max(res,r-l);
                 }
            }
        }
        return res;
    }
};