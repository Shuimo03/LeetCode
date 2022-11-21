package Array;

public class Offer29 {
    public int[] spiralOrder(int[][] matrix) {
        if(matrix.length == 0){
            return new int[0];
        }
        int left = 0, right = matrix[0].length-1, top = 0, button = matrix.length-1,x = 0;
        int res[] = new int[(right+1) * (button+1)];
        while (true){
            for(int i = left; i <= right; i++) res[x++] = matrix[top][i]; // 从左到右
            if(++top > button) break;
            for(int i =  top; i <= button; i++) res[x++] = matrix[i][right]; //从上到下
            if(left > --right) break;
            for(int i = right; i >= left; i--) res[x++] = matrix[button][i];
            if(top > --button) break;
            for(int i = button; i >= top; i--) res[x++] = matrix[i][left];
            if(++left > right) break;
        }
        return  res;
    }
}
