#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int res = word.find(ch);
        if (res == -1){
            return word;
        }else{
            reverse(word.begin(),word.begin()+res+1);
        }
        return word;
    }
};