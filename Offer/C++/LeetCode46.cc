#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    vector<int> state; // 遍历过路径的状态

    void dfs(vector<int>& nums,int n){
        if(n == nums.size()){
              res.push_back(nums);
        }
        
        for(int i = 0; i < nums.size(); i++){
            // 没有遍历过的地方
            if(nums[i] >= -10){
                state.push_back(nums[i]);
                nums[i] -=30;
                dfs(nums,n+1);
                //回溯
                nums[i] +=30;
                state.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums,0);
        return res;
    }
    
};