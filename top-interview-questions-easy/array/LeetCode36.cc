#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // 定义数字行内出现的次数
        int rows[9][9];
        // 定义数字列内出现的次数
        int cols[9][9];
        // 定义3x3小棋盘内出现的次数
        int subboards[3][3][9];

        /**
         * 初始化rows和cols以及subboards
         * 
         */
        memset(rows,0,sizeof(rows));
        memset(cols,0,sizeof(cols));
        memset(subboards,0,sizeof(subboards));
        
        // 遍历整个棋盘
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char c = board[i][j]; // 当前位置
                // 跳过空格
                if(board[i][j] == '.'){
                    continue;
                }
                int index = c-'0'-1;
                rows[i][index]++;
                cols[j][index]++;
                subboards[i / 3][j/3][index]++;
                // 如果在同一行或同一列以及3x3的小棋盘中出现了重复的数字,就返回false
                if(rows[i][index] > 1 || cols[j][index] > 1 || subboards[i/3][j/3][index] > 1){
                    return false;
                }
            }
        }
        return true;
    }
};