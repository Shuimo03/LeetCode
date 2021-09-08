#include<string>
using namespace std;
class Solution {
public:

    bool judge(string& s, int l,int r){
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int size = s.size();
        if(size <= 1){
            return true;
        }

        int l = 0;
        int r = size-1;

        while(l < r){
            if(s[l] != s[r]){
                return judge(s,l+1,r) || judge(s,l,r-1);
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};