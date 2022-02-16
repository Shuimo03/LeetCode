#include<algorithm>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class Solution {
public:
    vector<int> direction{-1,0,1,0,-1}; // 定义遍历的方向

    int shortestBridge(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int,int>> points;

        //DFS寻找第一个岛屿,并把1全部赋值给2
        bool visited = false;
        for(int i = 0; i < m; i++){
            if(visited){
                break;
            }
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    dfs(points,grid,m,n,i,j);
                    visited = true;
                    break;
                }
            }
        }

        // bfs寻找第二个岛屿,并把过程中经过的0赋值为2
        int x,y;
        int level =0;
        while(!points.empty()){
            ++level;
            int n_points = points.size();
            while(n_points--){
                auto [r,c] = points.front();
                points.pop();

                for(int k = 0; k < 4; ++k){
                    x = r+direction[k], y = c+direction[k+1];
                    if(x >= 0 && y >= 0 && x < m && y < n){
                        if(grid[x][y] == 2){
                            continue;
                        }
                        if(grid[x][y] == 1){
                            return level;
                        }
                        points.push({x,y});
                        grid[x][y] = 2;
                    }
                }
            }
        }
        return 0;
    }

    void dfs(queue<pair<int,int>>& points, vector<vector<int>> &grid, int m, int n, int i, int j){
        if(i < 0 || j < 0 || i == m || j == n || grid[i][j] ==2){
            return;
        }
        if(grid[i][j] == 0){
            points.push({i,j});
            return;
        }
        grid[i][j] = 2;
        dfs(points,grid,m,n,i-1,j);
        dfs(points,grid,m,n,i+1,j);
        dfs(points,grid,m,n,i,j-1);
        dfs(points,grid,m,n,i,j+1);
    }
};