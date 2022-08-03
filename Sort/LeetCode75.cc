#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
          quickSort(nums,0,nums.size()-1);
    }

    int partition(vector<int>& nums,int left, int right){
        int pivot = right;
        int j = left;
        for(int i = left; i < right; i++){
            if(nums[i] < nums[pivot]){
                swap(nums[i],nums[j]);
                ++j;
            }
        }
        swap(nums[j],nums[pivot]);
        return j;
    }

    void quickSort(vector<int>& nums,int left, int right){
        if(left < right){
            int p = partition(nums,left,right);
            quickSort(nums,left,p-1);
            quickSort(nums,p+1,right);
        }
    }
};