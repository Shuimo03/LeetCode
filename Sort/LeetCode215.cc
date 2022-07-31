#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    // 解法1: 将数组排序，之后根据数组长度减去k就能够得到最终值。时间复杂度O(nlogn)
    // int findKthLargest(vector<int>& nums, int k) {
    //     sort(nums.begin(),nums.end());
    //     int index = nums.size()-k;
    //     return nums[index];
    // }

    int findKthLargest(vector<int>& nums, int k){
        int left = 0, right = nums.size()-1,target = nums.size()-k;
        while(left < right){
            int mid = quickSelection(nums,left,right);
            if(mid == target){
                return nums[mid];
            }
            if(mid < target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return nums[left];
    }

    int quickSelection(vector<int>& nums, int left, int right){
        int i = left+1, j = right;
        while(true){
            while(i < right && nums[i] <= nums[left]){
                ++i;
            }
            while(left < j && nums[j] >= nums[left]){
                --j;
            }
            if(i >= j){
                break;
            }
            swap(nums[i],nums[j]);
        }   
        swap(nums[left],nums[j]);
        return j;
    }
};