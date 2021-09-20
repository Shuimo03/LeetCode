#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> map;
        for(auto num:nums){
            map[num]++;
        }
        
        for(auto num:map){
            if(num.second == 1){
                res.push_back(num.first);
            }
        }
        return res;
    }
};