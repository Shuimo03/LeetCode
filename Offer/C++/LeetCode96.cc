#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    unordered_map<int,int> memo;

    int numTrees(int n) {
        /**
         * 当n == 0的时候表示树为空
         * 当n == 1的时候表示树只有一个节点
         * */
        if(n <= 1){
            return 1;
        }
        if(memo.count(n)){
            memo[n];
        }
        int ret = 0;
        for(int i =0 ; i < n; i++){
            int left = numTrees(i);
            int right = numTrees(n-i-1);
            ret += left * right;
        }
        memo[n] = ret;
        return ret;
    }
};