#include<unordered_map>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s  = "anagram";
    string t = "nagaram";

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    cout << s << endl;
    cout << t << endl;

    return 0;
}