package Stack;

import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.Deque;

public class LeetCode215 {
    public int findKthLargest(int[] nums, int k) {
        if(nums.length == 0){
            return 0;
        }

        Arrays.sort(nums);
        int sum = 0;
        Deque<Integer> stack = new ArrayDeque<>();
        for(int i = 0; i < nums.length; i++){
            stack.push(nums[i]);
        }

        for(int i = 0; i < k; i++){
            sum = stack.pop();
        }
        return sum;
    }
}
