#include<unordered_map>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s  = "AnAgram";
    string t = "nagaram";

    transform(s.begin(),s.end(),s.begin(),::tolower);

    cout << s << endl;
    return 0;
}