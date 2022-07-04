#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
       int nums1_len = nums1.size(),nums2_len = nums2.size();
       int index1 = 0, index2 = 0;
       vector<int> res;
       while(index1 < nums1_len && index2 < nums2_len){
        int num1 = nums1[index1],num2 = nums2[index2];
            if(num1 == num2){
                //保证加入元的素唯一性    
                if(!res.size() || num1 != res.back()){
                    res.push_back(num1);
                }
                index1++;
                index2++;
            }else if(num1 < num2){
                index1++;
            }else{
                index2++;
            }
       }
       return res;
    }
};