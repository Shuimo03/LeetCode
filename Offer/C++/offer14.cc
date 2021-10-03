#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        if(n < 4){
            return n-1;
        }
        vector<int> dp(n+1,0);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        int max_val = 0;
        
        for(int i = 4; i <= n; i++){
            max_val = 0;
            for(int j = 1; j <= i/2; j++){
                max_val = max(max_val,dp[j] * dp[i-j]);
            }
            dp[i] = max_val;
        }
        return dp[n];
    }
};