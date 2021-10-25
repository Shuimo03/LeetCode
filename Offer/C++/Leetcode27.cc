#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0){
            return 0;
        }
        int l = 0;
        for(int r = 0; r < nums.size(); r++){
            if(nums[r] != val){
                nums[l] = nums[r];
                l++;
            }
        }
        return l;
    }
};