#include<iostream>
#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int cnt = 0;

        // 找到第一个字符
        while(word[cnt]!= ch && cnt < word.size()){
            cnt++;
        }
        if(cnt != word.size() && cnt != 0){
            reverse(word.begin(),word.begin()+cnt+1);
        }
        return word;
    }
};