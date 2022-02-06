#include<iostream>
#include<vector>
using namespace std;

void quickSort(vector<int> &nums, int l, int r){

    if(l+1 >= r){
        return;
    }

    int first = l, last = r-1,key = nums[first];

    while (first < last){
        while(first < last && nums[last] >= key){
            --last;
        }
        nums[first] = nums[last];
        while(first < last && nums[first] <= key){
            ++first;
        }
        nums[last] = nums[first];
    }
    nums[last] = nums[first];
    quickSort(nums,l,first);
    quickSort(nums,first+1,r);
}

void mergeSort(vector<int> &nums, int l, int r, vector<int> &temp){
    if (l+1 >= r){
        return;
    }

    // divide
    int m = l+(r-l)/2;
    mergeSort(nums,l,m,temp); // left
    mergeSort(nums,m,r,temp); // right

    //conquer
    int p = l, q = m,i = l;

    while(p < m || q < r){
        if(p >=r || (p < m && nums[p] <= nums[q])){
            temp[i++] = nums[p++];
        }else{
            temp[i++] = nums[q++];
        }
    }

    for(i = l; i < r; ++i){
        nums[i] = temp[i];
    }
}