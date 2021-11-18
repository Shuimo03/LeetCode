#include<iostream>
#include<vector>
using namespace std;

/**
 * 两种解题方法: 牛顿迭代法和二分查找法
 * 
 */
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return x;
        int l = 1, r = x,mid,sqrt;

        while(l <= r){
            int mid = l+(r-l)/2;
            sqrt = x/ mid;
            if(sqrt == mid){
                return mid;
            }else if(mid > sqrt){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return r;
    }
};