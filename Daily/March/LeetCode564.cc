#include<vector>
#include<iostream>
#include<string>
#include<set>
#include<math.h>
#include<limits.h>
using namespace std;

/**
 *  暴力法:遍历1-n之间所有的回文数,取绝对值差最小的一个，如果两个绝对值差相等，就取最小的数字，举个例子，输入10，离它最近的是9和11，它们的绝对值都是1，
 * 这个时候取9，因为9最小。
 * 
 */
class Solution {
public:
    vector<long> getCandidates(const string& n) {
        int len = n.length();
        vector<long> candidates = {
            (long)pow(10, len - 1) - 1,
            (long)pow(10, len) + 1,
        };
        long selfPrefix = stol(n.substr(0, (len + 1) / 2));
        for (int i : {selfPrefix - 1, selfPrefix, selfPrefix + 1}) {
            string prefix = to_string(i);
            string candidate = prefix + string(prefix.rbegin() + (len & 1), prefix.rend());
            candidates.push_back(stol(candidate));
        }
        return candidates;
    }

     string nearestPalindromic(string n){
         long selfNumber = stol(n),ans = -1;
         const vector<long>& candidates = getCandidates(n);
         for(auto& candidate:candidates){
             if(candidate != selfNumber){
                 if(ans == -1 || abs(candidate-selfNumber) < abs(ans-selfNumber) || abs(candidate-selfNumber)==abs(ans-selfNumber) && candidate < ans){
                     ans = candidate;
                 }
             }
         }
         return to_string(ans);
     }
};