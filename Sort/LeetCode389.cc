#include<iostream>
#include<algorithm>
using namespace std;


// 位运算
class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size() == 0){
            return t[0];
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int index1 = 0, index2  = 0;
        for(int i = 0; i < t.size(); i++){
            if(s[index1] == t[index2]){
                index1++;
                index2++;
            }else{
                return t[index2];
            }
        }
        return t[0];
    }
};