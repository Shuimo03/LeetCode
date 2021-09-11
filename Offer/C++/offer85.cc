#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<unordered_set<string>> s(9);
        s[1].insert("()");
        for(int i = 2; i <= n; i++){
            for(const string& str: s[i-1]){
                s[i].insert('('+str+')');
                s[i].insert("()"+str);
                s[i].insert(str+"()");
            }

            for(int j  = 1; j <= i / 2; j++){
                for(const string&str1: s[j]){
                   for(const string&str2:s[i-j]){
                       s[i].insert(str1+str2);
                       s[i].insert(str2+str1);
                   }
                }
            }
        }
        vector<string>ans;
        for(const string& str:s[n])
        ans.push_back(str);
        
        return ans;
    }
};