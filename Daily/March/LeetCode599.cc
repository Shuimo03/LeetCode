#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> index;
        for(int i = 0; i < list1.size(); i++){
            index[list1[i]] = i;
        }
        vector<string> res;
        int minIndex = INT_MAX;
        for(int i = 0; i < list2.size(); i++){
            if(index.count(list2[i]) > 0){
                int j = index[list2[i]];
                if(i+j < minIndex){
                    res.clear();
                    res.push_back(list2[i]);
                    minIndex = i+j;
                }else if(i+j == minIndex){
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};