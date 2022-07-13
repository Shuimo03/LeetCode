#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int index1 = 0, index2 = 0;
        vector<int> intersection;
        while(index1 < nums1.size() && index2 < nums2.size()){
            int num1 = nums1[index1], num2 = nums2[index2];
            if(num1 == num2){
                if(!intersection.size() || num1 != intersection.back()){
                    intersection.push_back(num1);
                }
                index1++;
                index2++;
            }else if(num1 < num2){
                index1++;
            }else{
                index2++;
            }
        }
        return intersection;
    }
};