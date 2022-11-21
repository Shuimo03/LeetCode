package Array;

public class Offer21 {
    public int[] exchange(int[] nums) {
        int left = 0,right = nums.length-1;
        while (left < right){
            while(left < right && (nums[left] & 1) == 1) left++;
            while(left < right && (nums[right] & 1) == 0) right--;
            int  temp  = nums[left];
            nums[left] = nums[right];
            nums[right]  = temp;
        }
        return nums;
    }

    public void swap(int i,  int j){
        int  temp = i;
        i = j;
        j = temp;
    }
}
