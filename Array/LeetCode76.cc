#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> chars(128,0);
        vector<bool> flag(128,false);
        
        // 先统计T中的字符情况
        for(int i = 0; i < t.size(); i++){
            flag[t[i]] = true;
            ++chars[t[i]];
        }

        //移动窗口,不断统计数据
        int cnt = 0, l = 0, min_l = 0, min_size = s.size()+1;
        for(int r = 0;  r < s.size(); r++){
            if(flag[s[r]]){
                if(--chars[s[r]] >= 0){
                    ++cnt;
                }

                while(cnt == t.size()){
                    if(r-l+1 < min_size){
                        min_l = l;
                        min_size = r-l+1;
                    }
                    if(flag[s[l]] && ++chars[s[l]] > 0){
                        --cnt;
                    }
                }
                ++l;
            }
        }
        return min_size > s.size()? "":s.substr(min_l,min_size);
    }
};