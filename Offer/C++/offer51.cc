#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int mergeSort(vector<int>&  nums,vector<int>& temp,int l,int r){
        if(l >= r){
            return 0;
        }

        int mid = (l+r) / 2;
        int inv_count = mergeSort(nums,temp,l,mid)+mergeSort(nums,temp,mid+1,r);
        int i = l, j = mid+1, pos = l;
        while(i <= mid && j <= r){
            if(nums[i] <= nums[j]){
                temp[pos] = nums[i];
                ++i;
                inv_count += (j-(mid+1));
            }
            else{
                temp[pos] = nums[j];
                ++j;
            }
            ++pos;
        }

        for(int k = i; k <= mid; k++){
            temp[pos++] = nums[k];
            inv_count += (j-(mid+1));
        }

        for(int k = j; k<=r; k++){
            temp[pos++] = nums[k];
        }

        copy(temp.begin()+l,temp.begin()+r+1,nums.begin()+l);
        return inv_count;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        return mergeSort(nums,temp,0,n-1);
    }
};