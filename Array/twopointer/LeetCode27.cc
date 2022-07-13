#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int n = nums.size();
        // int l = 0;
        // for(int i =0; i < n; i++){
        //     if(nums[i] != val){
        //         nums[l] = nums[i];
        //         l++;
        //     }
        // }
        // return l;

        int fast = 0,slow = 0;
        while(fast < nums.size()){
            if (nums[fast] != val){
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};