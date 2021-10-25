#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

/**
 * 最直接的做法就是双循环，时间复杂度是O(N^2),但是这样肯定不符合面试官的要求，
 * 可以改成map方法降低空间复杂度，但是时间和空间复杂度都是O(N)
 * 也可以使用二分查找+排序的方法。
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> stored;
        
        for(int i = 0; i < nums.size(); i++){
            auto it = stored.find(target-nums[i]);

            if(it != stored.end()){
                return vector<int> {i, it->second};
            }
            stored[nums[i]] = i;
        }
        return {};
    }

    vector<int>twoSum(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-1;
        
        while(l < r){
            if(nums[l]+nums[r] == target){
                return {l,r};
            }
            else if(nums[l]+nums[r] < target){
                l++;
            }
            else{
                r--;
            }
        }
        return {};
    }
};