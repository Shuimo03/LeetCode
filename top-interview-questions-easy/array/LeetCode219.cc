#include<vector>
#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

/**
 * 解法1:使用哈希表统计每个数字出现的次数,只要次数出现超过1次说明数组中有重复的值,就可以返回true。
 * 时间复杂度O(N) 空间复杂度O(N)
 * 
 * 解法2: 给数组排序，然后使用双指针l,r,当l和r相等的时候返回true,不相等的话,l就向前走。
 * 
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> cnt;
        bool res = false;
        for(int i = 0; i < nums.size(); i++){
            ++cnt[nums[i]];
        }
        
        for(auto num:cnt){
            if(num.second > 1){
                res = true;
            }
        }
        return res;
    }
    
    bool containsDuplicateDoublePoniter(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int l = 0;
        bool res = false;
        for(int r = 0; r < nums.size(); r++){
            if(nums[l] == nums[r]){
                res = true;
            }else{
                l++;
            }
        }
        return res;
    }

};