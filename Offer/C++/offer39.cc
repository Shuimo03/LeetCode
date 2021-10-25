#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    // 哈希表统计出现的次数
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> cntMap;
        int majority = 0, cnt = 0;
        for(auto num:nums){
            cntMap[num]++;
            if(cntMap[num] > cnt){
                majority = num;
                cnt = cntMap[num];
            }
        }
        return majority;
    }
};