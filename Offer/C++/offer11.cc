#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:

    void quickSort(vector<int>&arr,int l,int r){
        if( l >= r) return;
        int i = l-1, j = r+1, x = arr[l + r >> 1];
        while(i < j){
            do i++; while(arr[i] < x);
            do j--; while(arr[j] > x);
            if (i < j) swap(arr[i],arr[j]);
        }
        quickSort(arr,l,j);
        quickSort(arr,j+1,r);
    }
    int minArray(vector<int>& numbers) {
        if(numbers.size() == 0){
            return 0;
        }
        sort(numbers.begin(),numbers.end());
        return numbers[0];
    }
};