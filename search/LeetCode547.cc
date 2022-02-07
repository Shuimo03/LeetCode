#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(), cnt = 0;
        vector<bool> visited(n,false);
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                dfs(isConnected,i,visited);
                ++cnt;
            }
        }
        return cnt;
    }

    void dfs(vector<vector<int>>& friends, int i,vector<bool>& visited){
        visited[i] = true;
        for(int k = 0; k < friends.size(); ++k){
            if(friends[i][k] == 1 && !visited[k]){
                dfs(friends,k,visited);
            }
        }
    }
};