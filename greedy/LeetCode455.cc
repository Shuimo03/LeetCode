#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size() == 0 || s.size() == 0){
            return 0;
        }
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child = 0, cookie = 0;
        while(child < g.size() && cookie < s.size()){
            if(g[child] <= s[cookie]){
                child++;
            }
            cookie++;
        }
        return child;
    }
};