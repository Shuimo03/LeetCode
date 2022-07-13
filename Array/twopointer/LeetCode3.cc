#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //使用哈希表记录每个字符是否出现过
        unordered_set<char> sumSet;
        int n = s.size();
        int rk = -1, ans = 0;
        for(int i = 0; i < n; i++){
            if(i != 0){
                sumSet.erase(s[i-1]);
            }

            while(rk+1 < n && !sumSet.count(s[rk+1])){
                sumSet.insert(s[rk+1]);
                ++rk;
            }
            ans = max(ans,rk-i+1);
        }
        return ans;
    }
};