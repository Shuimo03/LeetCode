package 题解;

import java.util.Arrays;

public class Offer61 {

    public boolean isStraight(int[] nums) {
        int joker = 0; // 大小王
        Arrays.sort(nums);
        for(int i = 0; i < 4; i++){
            if (nums[i] == 0){
                joker++;
            }
            else if (nums[i] == nums[i+1]){
                return false;
            }
        }
        return nums[4]-nums[joker] < 5;
    }

    public static void main(String[] args) {
        int arr[] = new int[]{1,2,4};
        int test[] = new int[arr.length];
        System.arraycopy(arr,0,test,0,test.length);
        for(int i = 0; i < test.length; i++){
            System.out.println(test[i]);
        }
    }
}
