package iQiyiTest;

import java.util.HashMap;

public class LC1 {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0){
            return 0;
        }

        int fast = 1;
        int slow = 1;
        int length = nums.length;

        while (fast < length){
            if (nums[fast] != nums[fast-1]){
                nums[slow] = nums[fast];
                ++slow;
            }
            ++fast;
        }
        return slow;
    }

    public static void main(String[] args) {
        int nums[] = new int[]{0,0,1,1,1,2,2,3,3,4};
        LC1 lc1 = new LC1();
        System.out.println(lc1.removeDuplicates(nums));
    }
}
