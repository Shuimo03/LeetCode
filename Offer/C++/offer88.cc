#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int>dp;
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return min(minCost(cost,n-1),minCost(cost,n-2));
    }
    
    int minCost(vector<int>&cost, int n){
        if(n < 0){
            return 0;
        }
        if(n == 0 || n == 1){
            return cost[n];
        }
        if(dp[n] != 0) return dp[n];
        dp[n] =  cost[n]+min(minCost(cost,n-1),minCost(cost,n-2));
        return dp[n];
    }
};