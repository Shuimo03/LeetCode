#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        if(n < 4) return n-1;
        vector<int>dp(n+1,1);
        for(int i = 1; i <= n; i++)
        for(int j = i; j <= n; j++)
        dp[j] = max(dp[j],dp[j-i]*i);
        return dp[n];
    }
};