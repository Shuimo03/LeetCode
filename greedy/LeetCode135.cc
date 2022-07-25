#include<iostream>
#include<vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        if(ratings.size() < 2){
            return ratings.size();
        }
        vector<int>nums(ratings.size(),1);
        for(int i = 1; i < ratings.size(); i++){
            if(ratings[i] > ratings[i-1]){
                nums[i] = nums[i-1]+1;
            }
        }

        for(int i = ratings.size()-1; i > 0; i--){
            if(ratings[i] < ratings[i-1]){
                nums[i-1] = max(nums[i-1],nums[i]+1);
            }
        }
        return accumulate(nums.begin(),nums.end(),0);
    }
};