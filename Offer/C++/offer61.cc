#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int jocker = 0;
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < 4; i++){
            if(nums[i] == 0){
                jocker++; // 统计大小王
            }
            if(nums[i] == nums[i+1]){
                return false; // 有重复部分,直接返回。
            }
        }
        return nums[4]-nums[jocker] < 5;
    }
};
