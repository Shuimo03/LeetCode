package backtracking;

public class LeetCode79 {


    int[]dx = {-1,1,0,0};
    int[]dy = {0,0,-1,1};


    /**
     * @param board 棋盘
     * @param word 查找的单词
     * @return
     */

    public boolean exist(char[][] board, String word) {

        for(int i = 0; i < board.length; i++){
            for (int j = 0; j < board[0].length; j++){
                if (backtrack(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }

    /**
     * @param board 棋盘
     * @param word 查找的单词
     * @param x 棋盘初始位置
     * @param y 棋盘初始位置
     * @return
     */
    private boolean backtrack(char[][]board,String word, int x, int y, int index){
        if (word.length() == index){
            return true;
        }

        if(x < 0 || x >= board.length || y < 0 || y >= board[0].length
                || word.charAt(index) != board[x][y]
        ){
            return false;
        }

        // 查找邻居
        boolean ret = false;
        board[x][y] = '*';
        for(int i  = 0; i < 4; i++){
            if (backtrack(board,word,x+dx[i],y+dy[i],index+1)){
                ret = true;
                break;
            }
        }
        board[x][y] = word.charAt(index);
        return  ret;
    }
}
