#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;

        while(l <= r){
            int mid = (l+r) / 2;
            if(nums[mid] == mid){
                l = m +1;
            }
            else{
                r = m-1;
            }
        }
        return l;
    }
};