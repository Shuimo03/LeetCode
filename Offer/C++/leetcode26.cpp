#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 ){
            return 0;
        }

        int l = 1;
        int r = 1;
        for(int i = 0; i < n-1; i++){
            if(nums[l] != nums[l-1]){
                nums[r] = nums[l];
                r++;
            }
            l++;
        }
        return r;
    }

    int removeDuplicates(vector<int>& nums){
        if(nums.size() == 0){
            return 0;
        }
        set<int>res(nums.begin(),nums.end());
        nums.assign(res.begin(),res.end());
        return nums.size();
    }
};