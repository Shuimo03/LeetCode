package MeiTuan;

import java.util.Stack;

public class LeetCode7 {

    public int reverse(int x) {
        int max = Integer.MAX_VALUE;
        int stack = 0;
        while (x != 0){
            int pop = x%10;
            x /= 10;
            if(pop > 0 && stack > (max-pop) / 10){
                return 0;
            }
            if(pop < 0 && stack < (max-pop) /10){
                return 0;
            }
            stack = stack * 10 + pop;
        }
        return  stack;
    }
}
