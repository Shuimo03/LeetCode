package greedy;

import java.util.Arrays;

public class leetCode1196 {
    public int maxNumberOfApples(int[] arr) {
        Arrays.sort(arr);
        int l = 0;
        int r = arr.length-1;
        int cnt = 0;
        for(int i =0; i <arr.length-1; i++){
            if(arr[l] + arr[r] > 5000){
                break;
            }
            else {
                cnt++;
            }
            l++;
            r--;
        }
        return cnt;
    }

    public static void main(String[] args) {
        leetCode1196 leetCode1196 = new leetCode1196();
        int arr[] = new int[]{100,200,150,1000};
        System.out.println(leetCode1196.maxNumberOfApples(arr));
    }
}
