#include<vector>
#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n  = s.size();
        vector<int> prenum(n);
        for(int i = 0,nums = 0; i < n ; i++){
            if(s[i] == '*'){
                nums++;
            }
            prenum[i] = nums;
        }

        vector<int>left(n);
        for(int i = 0, l = -1; i < n; i++){
            if(s[i] == '|'){
                l = i;
            }
            left[i] = l;
        }

        vector<int>right(n);
        for(int i = n-1, r = -1; i >= 0; i--){
            if (s[i] == '|'){
                r = i;
            }
            right[i] = r;
        }

        vector<int> ans;
        for(auto& query: queries){
            int x = right[query[0]],y = left[query[1]];
            ans.push_back(x == -1 || y == -1 || x >= y ? 0: prenum[y]-prenum[x]);
        }
        return ans;
    }
};