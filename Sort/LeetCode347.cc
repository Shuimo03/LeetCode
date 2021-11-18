#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnts; 
        int max_cnt = 0;
        // 统计每个数字出现的次数
        for(const int & num: nums){
            max_cnt = max(max_cnt,++cnts[num]);
        }
        /**
         * 将统计好的数字压入桶里面。
         * 
         */
        vector<vector<int>> buckets(max_cnt+1);
        for(const auto &p : cnts){
            buckets[p.second].push_back(p.first);
        }
        vector<int> ans;
        for(int i = max_cnt; i>= 0 && ans.size() < k; --i){
            for(const int & nums:buckets[i]){
                ans.push_back(nums);
                if(ans.size() == k){
                    break;
                }
            }
        }
        return ans;
    }
};