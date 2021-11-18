#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

// 时间复杂度在O(n) 空间复杂度也是O(n)
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        vector<int>nums(n+1,1);
        for(int i = 2; i<=n; i++){
            nums[i] = nums[i-1]+nums[i-2];
        }
        return nums[n];
    }
};