#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    static bool cmp_value(const pair<int, int> left,const pair<int,int> right)
    {
        return left.second < right.second;
    }

    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> cnt;
        int max_value = 0;
        for(int i = 0; i < edges.size(); i++){
            for(int j = 0; j < edges[0].size(); j++){
                ++cnt[edges[i][j]];
            }
        }
        auto res = max_element(cnt.begin(),cnt.end(),cmp_value);
        max_value = res->first;
        return max_value;
    }
};



int main(){

    vector<vector<int>> edges = {{1,2},{2,3},{4,2}};

       unordered_map<int,int> cnt;
      int res = 0;
        for(int i = 0; i < edges.size(); i++){
            for(int j = 0; j < edges[0].size(); j++){
                ++cnt[edges[i][j]];
            }
        }

        auto maxvalue = max_element(cnt.begin(),cnt.end(),cmp_value);
        res = maxvalue->first;
        cout << res;

        printf("\n");

}