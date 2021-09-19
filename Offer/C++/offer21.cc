#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int l = 0,  r = nums.size()-1;
        while(l < r){
            while(l < r && (nums[l] & 1) == 1) l++;
            while(l < r && (nums[r] & 1) == 0) r--;
            swap(nums[l],nums[r]);
        }
        return nums;
    }
};