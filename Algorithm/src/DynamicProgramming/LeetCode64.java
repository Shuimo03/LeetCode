package DynamicProgramming;

public class LeetCode64 {

    public int minPathSum(int[][] grid) {
        return 0;
    }

    public static void main(String[] args) {
        int[][] grid = new int[][]{{1,3,1},{1,5,1},{4,2,1}};
        int sum = 0;
        for(int i = 0; i < grid[0].length; i++){
            sum+=grid[0][i];
            sum+=grid[1][grid.length-1];
            System.out.println(sum);
            sum+=grid[2][grid.length-1];
        }
        System.out.println(sum);
    }
}
