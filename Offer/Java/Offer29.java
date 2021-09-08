public class Offer29 {

    public int[] spiralOrder(int[][] matrix) {
        if (matrix.length == 0){
            return new int[0];
        }
        /**
         * 顺时针打印矩阵顺序
            * 从左到右
            * 从上到下
            * 从右到左
            * 从下到上
         */

        int left = 0;
        int right = matrix[0].length-1;
        int top = 0;
        int buttom = matrix.length-1;
        int x = 0;
        int[]res = new int[(right+1) * (buttom+1)];
        while (true){
            for (int i =left; i <= right; i++){
                res[x++] = matrix[top][i];
            }
            if (++top > buttom){
                break;
            }

            for(int i  = top; i <= buttom; i++){
                res[x++] = matrix[i][right];
            }
            if (left > --right){
                break;
            }

            for(int i = right; i >=left; i--){
                res[x++] = matrix[buttom][i];
            }

            if (top >--buttom){
                break;
            }

            for(int i = buttom; i >= top; i--){
                res[x++] = matrix[i][left];
            }
            if (++left > right) break;
        }
        return res;
    }
}
