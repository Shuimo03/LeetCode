#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr = {2,0,3};
    sort(arr.begin(),arr.end());
    int l = 0, r = arr.size()-1;
    for(int i = 0; i < arr.size(); i++){
        int res = arr[l]+arr[r];
        if(res == 6){
            cout << "true" << endl;
        }else{
            cout << "false" << endl;
        }
    }
    return 0;
}