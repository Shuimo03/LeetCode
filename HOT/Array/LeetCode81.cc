#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    //简单做法直接遍历数组
    bool search(vector<int>& nums, int target) {
        if(nums.size() == 0){
            return false;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return true;
            }
        }
        return false;
    }

    bool search(vector<int> nums,int target){
        int l =0, r = nums.size()-1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[l] == nums[mid]){
                //无法判断那个区间是增序
                ++l;
            }else if(nums[mid] <= nums[r]){
                //右区间是增序
                if(target > nums[mid] && target <= nums[r]){
                    l = mid+1;
                }
                else{
                    r= mid-1;
                }
            } else{
                //左区间是增序
                 if(target >= nums[l] && target <nums[mid]){
                     r = mid-1;
                 }else{
                     l = mid+1;
                 }
            }
        }
        return false;
    }
    
};