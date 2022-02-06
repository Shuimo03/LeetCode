#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()){
            return vector<int>{-1,-1};
        }
        int left = leftBinarySearch(nums,target);
        int right = rightBinarySearch(nums,target)-1;
        if(left == nums.size() || nums[left] != target){
            return vector<int>{-1,-1};
        }
        return vector<int>{left,right};
    }

    int leftBinarySearch(vector<int>& nums, int target){
        int l = 0,r = nums.size();

        while(l < r){
            int mid = l+(r-l) / 2;
            if (nums[mid] >= target){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }

    int rightBinarySearch(vector<int>& nums, int target){
        int l = 0, r = nums.size();

        while(l < r){
            int mid = l+(r-l) / 2;
            if (nums[mid] > target){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};