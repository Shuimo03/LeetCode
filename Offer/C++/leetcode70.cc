#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numWays(int n) {
        vector<int>res(n+2);
        int mod = 1000000007;
        res[0] = 1;
        res[1] = 1;
        for(int i = 2; i < n; i++){
            res[i] = (res[i-1] % mod + res[i-2] % mod) % mod;
        }
        return res[n];
    }
};