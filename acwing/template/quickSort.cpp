#include<iostream>
void quickSort(int arr[],int l ,int r){
    
    if( l >= r)return;

    int i = l-1;
    int j = r+1;
    int x = arr[l+r>>1];

    while(i < j){
        do i++; while(arr[i] < x);
        do j++; while(arr[j] > x);
        if(i < j) swap(arr[i],arr[j]);
    }
    quickSort(arr,l,j);
    quickSort(arr,j+1,r);
}
