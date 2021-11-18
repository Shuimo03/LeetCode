#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;


// 快排算法
void quick_sort(vector<int>& nums,int l,int r){
    if(l+1 >= r){
        return;
    }
    int first = l, last = r-1, key = nums[first];
    while(first < last){
        while(first < last && nums[last] >= key){
            --last;
        }
        nums[first] = nums[last];
        while(first < last && nums[first] <= key){
            ++first;
        }
        nums[last] = nums[first];
    }
    nums[first] = key;
    quick_sort(nums,l,first);
    quick_sort(nums,first+1,r);
}

// 归并排序

// 插入排序

// 冒泡排序

// 选择排序

int main(){
    vector<int>nums = {3,2,1,5,6,4};
     sort(nums.begin(),nums.end(),greater<int>());
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i]<<" ";
    }
    puts(" ");
    return 0;
}