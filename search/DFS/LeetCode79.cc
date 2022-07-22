#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty()){
            return false;
        }
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        bool find = false;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                backtracking(i,j,board,word,find,visited,0);
            }
        }
        return find;
    }

    /**
     * @brief 
     * 
     * @param i 
     * @param j 
     * @param board 棋盘大小
     * @param word 带搜索的单词
     * @param find 
     * @param visited 用来标记该位置是否被访问过
     * @param pos  单词位置
     */
    void backtracking(int i, int j, vector<vector<char>>& board,string& word, bool& find, vector<vector<bool>> visited, int pos){
        //判断是否越界,如果越界直接返回
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size()){
            return;
        }
        if(visited[i][j] || find ||  board[i][j] != word[pos]){
            return;
        }
        if(pos == word.size()-1){
            find = true;
            return;
        }
        visited[i][j] = true; // 该位置已经被遍历过,修改当前节点状态
        //递归子节点,遍历四个方向
        backtracking(i+1,j,board,word,find,visited,pos+1);
        backtracking(i-1,j,board,word,find,visited,pos+1);
        backtracking(i,j+1,board,word,find,visited,pos+1);
        backtracking(i,j-1,board,word,find,visited,pos+1);
        visited[i][j] = false; 
    }
};