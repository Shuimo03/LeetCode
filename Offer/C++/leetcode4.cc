#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    /**
     * 暴力法:合并两个数组,这样难度就从hard降低到了easy，空间复杂度是O(m+n),时间复杂度也是O(m+n)。
     *  1.合并数组
     *  2.排序合并后的数组
     *  3.按照数组长度分情况来寻找中位数
     * */
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        int l = 0, r= m;
        if(m > n){
            return findMedianSortedArrays(nums2,nums1);
        }

        while(l < r){
            int i = (l+r)/2, j = (m+n+1)/2-i;
            nums1[i] < nums2[j-1] ? l = ++i : r = i;
        }
        r = (m+n+1) /2 -1;
        int subL = max(l <= 0 ? INT_MIN : nums1[l - 1],r <= 0 ? INT_MIN : nums2[r - 1]);
        if((m+n) & 1) return subL;
        int subR = min( l >= m ? INT_MAX:nums1[l], r >= n ? INT_MAX : nums2[r]);
        return (subL+subR) / 2.0;
    }
};