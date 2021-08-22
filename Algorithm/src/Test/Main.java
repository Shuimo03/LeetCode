package Test;
;
import java.util.Arrays;

public class Main {

    public static boolean isMonotonic (int[] nums) {
        // write code here
        Arrays.sort(nums);
        int l = 0;
        int r = 1;
        for(int i = 0; i < nums.length-1; i++){
                if ( nums[l] == nums[r]){
                    return false;
                }
            l++;
            r++;

        }
        return true;
    }


    public static void main(String[] args) {
        int arr[] = new int[]{1,2,3,3};
        System.out.println(isMonotonic(arr));
    }
}
