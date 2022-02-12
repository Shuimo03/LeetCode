#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * 题目大概意思是给一个n，要求分子分母在1-n之间，并且得出来的分数答案区间在(0,1).同时保证这个分数是最简的。
 * 比如n = 2,结果就是["1/2"]它就是一个最简的，它的答案也是在(0,1)区间内。
 * 比如n = 4,结果就是["1/2","1/3","1/4","2/3","3/4"],没有2/4的愿意在于2/4又可以化简成为1/2。
 * 
 * 所以这题可以使用暴力枚举的方法,假设分母denominator的区间在[2,n],分子numerator的区间在[1,denominator)之间，如果分子分母的最大公约数(GCD)等于1，那就是最简分数。
 */

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for(int denominator = 2; denominator <=n; denominator++){ // 分母区间
            for(int numerator = 1; numerator < denominator; numerator++){
                if(__gcd(numerator,denominator) == 1){
                        ans.push_back(to_string(numerator) + "/" + to_string(denominator));
                }
            }
        }
        return ans;
    }
};