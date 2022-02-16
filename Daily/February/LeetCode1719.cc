#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Solution{
    
    public:
    int checkWays(vector<vector<int>>& pairs){
        unordered_map<int,unordered_set<int>> adj; // 节点x的祖先和后台节点集合
        // emplace?
        for(auto &p : pairs){
            adj[p[0]].emplace(p[1]);
            adj[p[1]].emplace(p[0]);
        }
        // 检查是否存在根节点
        int root = -1;
        for(auto &[node,neighbours]: adj){
            if(neighbours.size() == adj.size()-1){
                root = node;
                break;
            }
        }
        if (root == -1){
            return 0;
        }

        int res = 1;
        for(auto &[node,neighbours]: adj){
            if(node == root){
                continue;
            }
            int currDegree = neighbours.size();
            int parent = -1; // 父节点
            int parentDegree = INT16_MAX;

            //根据degree的大小找到node父节点parent
           for (auto &neighbour : neighbours) {
                if (adj[neighbour].size() < parentDegree && adj[neighbour].size() >= currDegree) {
                    parent = neighbour;
                    parentDegree = adj[neighbour].size();
                }
            }
            if(parent == -1){
                return 0;
            }

            // 检查neighbours是否是adj[parent]的子集
            for(auto &neighour: neighbours){
                if(neighour == parent){
                    continue;
                }
                if(!adj[parent].count(neighour)){
                    return 0;
                }
            }
            if(parentDegree == currDegree){
                res = 2;
            }
        }
        return res;
    }
};