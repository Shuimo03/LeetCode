#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size(), mask = 1 << n;
        int max = 0, cnt = 0;
        
        for(int i = 0; i < mask; i++){
            int cur = 0;
            for(int j = 0; j < n; j++){
                if(((i >> j) &1) == 1) cur |= nums[j];
            }
            if (cur > max){
                max = cur, cnt = 1;
            }else if (cur == max){
                cnt++;
            }
        }
        return cnt;
    }
};