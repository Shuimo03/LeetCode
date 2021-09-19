#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        int jocker = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < 4; i++){
            if(nums[i] < 4){
                jocker++;
            }
            else if(nums[i] == nums[i+1]){
                return false;
            }
        }
        return nums[4]-nums[jocker] < 5;
    }
};
