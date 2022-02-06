#include<vector>
#include<algorithm>
#include<iostream>
#include<unordered_map>
using namespace std;

/**
 * 知识点：排序/hashmap/堆
 * 
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        int max_cnt = 0;
        for(const int & num: nums){
            max_cnt = max(max_cnt,++cnt[num]);
        }  

        vector<vector<int>> buckets(max_cnt+1);
        for(const auto & p: cnt){
            buckets[p.second].push_back(p.first);
        }

        vector<int> ans;

        for(int i = max_cnt; i>= 0 && ans.size() < k; --i){
            for(const int & num : buckets[i]){
                ans.push_back(num);
                if (ans.size() == k){
                    break;
                }
            }
        }
        return ans;
    }
};