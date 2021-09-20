#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> once,twice;
        for(auto &num: nums){
            if(once.count(num)){
                twice.insert(num);
                once.erase(num);
            }
            else if(twice.count(num)){
                continue;
            }
            
            else{
                once.insert(num);
            }
        }
        return *once.begin();
    }
};