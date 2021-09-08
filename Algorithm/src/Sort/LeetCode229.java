package Sort;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class LeetCode229 {

    public List<Integer> majorityElement(int[] nums) {
        List<Integer> res =new ArrayList<>();
        int length = nums.length;
        int n = (int)Math.ceil(length/3);
        Arrays.sort(nums);
        if (length == 1){
            res.add(nums[0]);
            return res;
        }
        int p1 = 0, p2 = 0;
       for(p2 = 0; p2 < nums.length; p2++){
           if(nums[p2] != nums[p1]){
               if (p2-p1 > n){
                   res.add(nums[p1]);
               }
               p1 = p2;
           }
       }
       if(p2-p1 > n){
           res.add(nums[p1]);
       }
       return res;
    }
}
