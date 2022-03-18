#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool cmp(string a,string b){
    return a < b;
}

int main(){
    string str[] = {"a", "banana", "app", "appl", "ap", "apply", "apple"};
    sort(str,str+7,cmp);   
    for(int i = 0; i < 7; i++){
        cout << str[i] << " " << endl;
    }
    return 0;
}