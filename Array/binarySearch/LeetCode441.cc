#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
       int l  = 1, r = n; // 1 <=n <= 2^31-1
       while(l < r){
        int mid = (r-l+1)/2+l;
        if((long long)mid *(mid+1) <= (long long)2*n){
            l = mid;
        }else{
            r = mid-1;
        }
       }
       return l;
    }
};
