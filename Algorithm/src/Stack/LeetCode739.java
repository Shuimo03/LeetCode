package Stack;

import java.util.ArrayDeque;
import java.util.Deque;

public class LeetCode739 {

    public int[] dailyTemperatures(int[] temperatures) {
        int length = temperatures.length;
        int []ans = new int[length];
        Deque<Integer> stack = new ArrayDeque<Integer>();
        for(int i = 0; i < length; i++){
            int temperature = temperatures[i];
            while (!stack.isEmpty() && temperature > temperatures[stack.peek()]){
                int preIndex = stack.pop();
                ans[preIndex] = i-preIndex;
            }
            stack.push(i);
        }
        return ans;
    }
}
