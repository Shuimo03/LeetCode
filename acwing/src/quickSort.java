public class quickSort {




    public void sort(int[]arr, int l , int r){
       if(l >= r){
           return;
       }
       int point = arr[l];
       int i = l-1, j = r+1;

       while (i < j){
            do i++; while(arr[i] < point);
            do j--; while (arr[j] > point);
            if(i < j){
               int temp  = arr[i];
               arr[i] =arr [j];
               arr[j] = temp;
            }
       }
       sort(arr,l,j);
       sort(arr,j+1,r);
    }

    public static void main(String[] args) {
        int[]arr = new int[]{9,8,4,1,2};
        quickSort quickSort = new quickSort();
        quickSort.sort(arr,0,arr.length-1);
        for(Integer i:arr){
            System.out.print(i+" ");
        }
    }
}
