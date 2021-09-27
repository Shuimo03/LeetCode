#include<iostream>
#include<queue>
#include<unordered_map>

using namespace std;


class Solution {
public:

    // 哈希表做法
    char firstUniqChar(string s) {
        unordered_map<int,int> map;
        for(char c: s){
            ++map[c];
        }
        for(int i = 0; i < s.size(); i++){
            if(map[s[i]] == 1){
                return s[i];
            }
        }
        return ' ';
    }

    // 队列做法
    char firstUniqChar(string s) {

    }
};