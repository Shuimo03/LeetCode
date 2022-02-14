#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:

    vector<int> temp; // 已经被选中的数字
    vector<vector<int>> ans;

    void dfs(int cur ,int n, int k){
        //剪枝:temp长度加上区间[cur,n]的长度小于k,不可能构造出长度为k的temp
        if (temp.size()+(n-cur+1) < k){
            return;
        }
        //记录合法答案
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }
        // 考虑选择当前位置
        temp.push_back(cur);
        dfs(cur+1,n,k);
        temp.pop_back(); //还原上一步状态
        dfs(cur+1,n,k);
    }

    vector<vector<int>> combine(int n, int k) {
        dfs(1,n,k);
        return ans;
    }
};