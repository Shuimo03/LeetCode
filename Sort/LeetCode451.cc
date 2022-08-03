#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        //统计每个字符出现的次数
        unordered_map<char,int> cntMap;
        for(int i = 0; i < s.size(); i++){
            cntMap[s[i]]++;
        }
        //
        vector<pair<char,int>>res;
        for(auto &it: cntMap){
            res.emplace_back(it);
        }
        sort(res.begin(),res.end(),[](const pair<char,int> &a, pair<char,int> &b){
            return a.second > b.second;
        });
        
        string ret;
        for(auto &[ch,num]:res){
            for(int i = 0; i < num; i++){
                ret.push_back(ch);
            }
        }
        return ret;
    }
};