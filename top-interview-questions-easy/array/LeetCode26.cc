#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * 解法一: 因为数组是升序的,所以不需要考虑排序问题,使用unique将[nums.beigin(),nums.end())中等价的元素删除。
 * 除了首元素，然后返回新范围的迭代器。如果是没有排序的话,只会消除相邻重复的元素。
 * 
 * 解法二: 双指针做法,使用前后指针两两比较,只要是相同的数字就删除后面一个。
    *左指针始终向右边移动。
    *如果右指针指向的值等于左指针的值,左指针不动。
    *如果右指针指向的值不等于左指针指向的值，那么左指针往右移一步，然后再把右指针指向的值赋给左指针。
 */

class Solution {
public:
    int removeDuplicatesSolution(vector<int>& nums) {
     auto res = unique(nums.begin(),nums.end());
     nums.erase(res,nums.end());
     return nums.size();
    }
    int removeDuplicatesSolutionDoublePointer(vector<int>& nums){
        int l = 0;
        for(int r = 1; r < nums.size(); r++){
            if(nums[l] == nums[r]){
                continue;
            }else if(nums[l] != nums[r]){
                nums[++l] = nums[r];
            }
        }
        return ++l;
    }
};