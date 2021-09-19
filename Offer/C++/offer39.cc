#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    // 哈希表统计出现的次数
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        int majority = 0;
        int cnt = 0;
        for(int num:nums){
            ++counts[num];
            if(counts[num] > cnt){
                majority = num;
                cnt = counts[nums];
            }
        }
        return majority;
    }
};