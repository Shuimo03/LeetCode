#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()){
            return {-1,-1};
        }
        int lower = lower_serarch(nums,target);
        int upper = upper_search(nums,target)-1;
        if (lower == nums.size() || nums[lower] != target){
            return {-1,-1};
        }
        return {lower,upper};
    }
    //[L,R)
    int lower_serarch(vector<int>& nums, int target){
      int l = 0,r= nums.size();
      while(l < r){
          int mid = l+(r-l) /2;
          if(nums[mid] >= target){
              r = mid;
          }
          else{
              l = mid+1;
          }
      }
      return l;  
    }

    //[L,R]

    int upper_search(vector<int>& nums, int target){
    int l = 0,r = nums.size();
      while(l < r){
          int mid = l+(r-l) /2;
          if(nums[mid] > target){
              r = mid;
          }
          else{
              l = mid+1;
          }
      }
      return l;
    }
};