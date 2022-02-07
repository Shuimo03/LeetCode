#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> cnt;
        int res = 0;
        for(const int &num: nums){
            ++cnt[num];
        }
        for(auto i: cnt){
            if(i.second == 1){
                res += i.first;
            }
        }
        return res;
    }
};

int main(){
    vector<int>nums = {1,1,1,1,1};
    unordered_map<int,int> cnt;
    int res = 0;
    for(const int &num: nums){
        ++cnt[num];
    }
    
    for(auto x : cnt){
        cout << "Key:[" << x.first << "] Value:[" << x.second << "]\n";
    }
    cout << " "<<endl;
}