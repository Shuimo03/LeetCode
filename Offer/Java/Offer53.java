import java.util.Arrays;

public class Offer53 {

    public int search(int[] nums, int target) {

        if (nums.length == 0){
            return 0;
        }

        Arrays.sort(nums);

        int l = 0;
        int r = nums.length-1;
        int cnt = 0;

        while (l <= r){

            int numL = nums[l];
            int numR = nums[r];

            if (numL == target && numR == target){
                break;
            }
            if (numL != target){
                l++;
            }
            if (numR != target){
                r--;
            }
        }
        if (l <= r){
            cnt = Math.abs(r-l)+1;
        }
        return cnt;
    }

    public static void main(String[] args) {
        Offer53 offer53 = new Offer53();
        int arr[] = {5,7,7,8,8,10};
        System.out.println(offer53.search(arr,6));
    }
}
