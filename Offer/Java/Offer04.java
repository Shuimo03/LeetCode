public class Offer04 {

//    public boolean findNumberIn2DArray(int[][] matrix, int target) {
//        boolean res = false;
//
//        if (matrix == null || matrix.length == 0 || matrix[0].length == 0){
//            return res;
//        }
//
//
//        for(int i = 0; i < matrix.length; i++){
//            for (int j = 0; j < matrix[0].length; j++){
//                if (matrix[i][j] == target){
//                        res = true;
//                }
//            }
//        }
//        return res;
//    }

    public boolean findNumberIn2DArray(int[][] matrix, int target){
        boolean res = false;
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0){
            return res;
        }

        int i = matrix.length-1,j = 0;

        while (i >= 0 && j < matrix[0].length){
            if (matrix[i][j] > target){
                i--;
            }else if (matrix[i][j] < target) j++;
            else{
                res = true;
                return res;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Offer04 offer04 = new Offer04();
        int arr[][] = {{-1,3}};
        System.out.println(offer04.findNumberIn2DArray(arr,3));
    }
}
