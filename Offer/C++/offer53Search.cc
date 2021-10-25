#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

class Solution{
public:
    int search(vector<int>& nums, int target){
        unordered_map<int,int> cnt;
        for(auto n:nums){
            cnt[n]++;
        }
        if(cnt.find(target) != cnt.end()){
            return hash[target];
        }
        return 0;
    }

    int search(vector<int>& nums, int target){
        
    }
}