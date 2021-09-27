#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> res(m, vector<int>(n,0));
        return dfs(grid,res,0,0,m,n);
    }

    int dfs(vector<vector<int>>& grid, vector<vector<int>> &res,int i, int j, int m,int n){
        if(i >= m || j >= n){
            return 0;
        }
        if(res[i][j] > 0){
            return res[i][j];
        }
        res[i][j] = grid[i][j]+max(dfs(grid,res,i,j+1,m,n),dfs(grid,res,i+1,j,m,n));
        return res[i][j];
    }

    // DP做法
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int>dp(n);
        for(int i = 0; i < m; i++){
            for(int j  = 0; j < n; j++){
                if(i == 0 && j == 0) dp[j] = grid[i][j];
                else if(i == 0) dp[j] = dp[j-1]+grid[i][j];
                else if(j == 0) dp[j] += grid[i][j];
                else dp [j] = max(dp[j-1],dp[j])+grid[i][j];
            }
        }
        return dp[n-1];
    }
};