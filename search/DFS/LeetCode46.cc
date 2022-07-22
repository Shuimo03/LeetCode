#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backtrack(nums,0,ans);
        return ans;
    }

    void backtrack(vector<int> &nums, int level, vector<vector<int>> &ans){
        // 如果level == nums.size()，说明已经填完n哥位置，找到可行解，将level放进ans数组中
        if(level == nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i = level; i < nums.size(); i++){
            swap(nums[i],nums[level]);    //修改当前节点状态
            backtrack(nums,level+1,ans);
            swap(nums[i],nums[level]); // 回归到当前节点状态
        }
    }
};