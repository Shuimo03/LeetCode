#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        vector<vector<char>> vec(numRows,vector<char>(1001,'-'));
        int j = 0, k = 0;
        string res  = "";

        /**
         * 如果down==true表示向下移动,反之表示向上移动。
         */
        bool down = true;
        for(int i = 0; i < s.size(); i++){
            if (down == true){
                vec[j][k] = s[i];

                if(j != numRows-1){
                    j++;
                }
                /**
                 * 如果j在最后一行,表示已经到了Zig Zag的底部,所以就需要向上移动
                 */
                else{
                    down = false;
                    j = j-1;
                    k = k+1;
                }
            }else{
                vec[j][k] = s[i];

                //不在第一行
                if(j != 0){
                    j--;
                    k++;
                }
                //已经到了第一行,所以需要向下移动
                else{
                    down = true;
                    j=j+1;
                }
            }
        }
        // 遍历整个棋盘
        for(int i = 0; i < numRows; i++){
            for(int j =  0; j <1001; j++){
                if(vec[i][j] != '-'){
                    res+=vec[i][j];
                }
            }
        }
        return res;
    }
};