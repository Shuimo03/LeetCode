#include<iostream>
#include<vector>
using namespace std;


/**
 * 如果这题没有对时间和空间的限制，那解题的思路就有好几种:
    * 使用map统计每个数字出现的次数，最后返回出现一次的，这样的时间复杂度O(n)空间复杂度O(n) 
    * 使用排序的方法就是O(nlogn)
    * 使用异或的方法就满足题意。
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
      for (auto i:nums){
            res ^= i;
        }
        return res;
    }
};