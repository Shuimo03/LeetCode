#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

int main(){
    vector<int> arr = {5,7,7,8,8,10};
    unordered_map<int,int> cntMap;
    for(auto num:arr){
        cntMap[num]++;
    }

    for(int i = 0; i < cntMap.size(); i++){
        cout << cntMap.at(i)<<endl;
    }
}