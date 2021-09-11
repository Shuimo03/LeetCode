#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    // 测试用例38/68
    int robTest(vector<int>& nums) {
        int odd = 0;
        int even = 0;
        for(int i =  0; i < nums.size(); i++){
            if(i % 2 == 0){
                even += nums[i];
            }
            else if(i % 2 == 1){
                odd += nums[i];
            }
        }
        return max(odd,even);
    }

    int rob(vector<int>& nums){
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(!(i & 1)) sum1 = max(sum1+nums[i],sum2);
            else sum2 = max(sum2+nums[i],sum1);
        }
        return max(sum1,sum2);
    }
};