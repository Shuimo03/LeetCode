#include<iostream>
#include<string>
using namespace std;

// 替换问号
string replace(string &S){

    int l = 0;
    int r = S.size()-1; 
    while(l < r){

        if(S[l] == '?'){
            S[l] = S[r];
            l++;
            r--;
        }else if(S[r] == '?'){
            S[r] = S[l];
            l++;
            r--;
        }
        else if(S[l] != '?' && S[l] != S[r]){
            break;
        }
    }

    return S;
}
// 判断回文函数
bool validPalindrome(string S){
    int l = 0;
    int r = S.size()-1;
    while (l < r){
        if(S[l] == S[r]){
            l++;
            r--;
        }else{
            return false;
        }
    }
    return true;
}


string solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    string res =  replace(S);
    if(validPalindrome(res)){
        return res;
    }
    return "NO";
}

int main(int argc, char const *argv[])
{
    //string tests[] = {"?ab??a","bab??a","?a?","?ab??a"};
    string res = "?a?";
   
    cout <<  solution(res) << endl;
    return 0;
}
