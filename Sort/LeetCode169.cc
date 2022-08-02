#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> cntMap;
        for(int i = 0; i < nums.size(); i++){
            cntMap[nums[i]]++;
        }

        for(auto &cnt : cntMap){
            if(cnt.second > nums.size()/2){
                return cnt.first;
            }
        }
        return 0;
    }
};