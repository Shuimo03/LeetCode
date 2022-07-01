#include<iostream>
#include<vector>
using namespace std;


/**
 * 滑动窗口:设置lr作为左右两边的变量，之后r向右边扩展，不断和l相加，相加结果大于等于T
 * 之后用r-l每次取最小值。
 * 
 */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r= 0;
        int minNum = INT_MAX;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[r];
            while (sum >= target) {
                minNum = min(minNum,r-l+1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        return minNum == INT_MAX ? 0 : minNum;
    }
};