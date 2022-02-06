#include<iostream>
#include<vector>
using namespace std;

// class Solution {
//  public:
//     int findMinFibonacciNumbers(int k) {
//         vector<int> res = FibNumber(k);
//         int l = 0;
//         int r = res.size()-1;

//         for(int i = 0; i < res.size(); i++){
//             int target = res[l]+res[r];
//             if(target == k){
//                 res.clear();
//                 res.push_back(l);
//                 res.push_back(r);
//                 break;
//             }else if(target < k){
//                 l++;
//             }else{
//                 r--;
//             }
//         }
//        return res.size();
//     }

//     vector<int> FibNumber(int k){
//         vector<int> dp(k+1,0);
//         dp[1] = 1;
//         dp[1] = 1;
//         for(int i = 2; i <= k; i++){
//             dp[i] = dp[i-1]+dp[i-2];
//         }
//         return dp;
//     }
//  };


//      vector<int> FibNumber(int k){
//         vector<int> dp(k+1,0);
//         dp[1] = 1;
//         dp[1] = 1;
//         for(int i = 2; i <= k; i++){
//             dp[i] = dp[i-1]+dp[i-2];
//         }
//         return dp;
//     }

// int main(){

//     vector<int> res = FibNumber(19);
//     for(int i = 0 ; i < res.size(); i++){
//         cout << res[i] << endl;
//     }
//     return 0;
// }

class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> f;
        f.emplace_back(1);
        int a = 1, b = 1;
        while (a + b <= k) {
            int c = a + b;
            f.emplace_back(c);
            a = b;
            b = c;
        }
        int ans = 0;
        for (int i = f.size() - 1; i >= 0 && k > 0; i--) {
            int num = f[i];
            if (k >= num) {
                k -= num;
                ans++;
            }
        }
        return ans;
    }
};