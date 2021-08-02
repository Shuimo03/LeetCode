package Array;

import java.util.HashMap;

public class LeetCode136 {

    /**
     * 如果要符合题意的话，应该使用异或运算,这里使用哈希表的方式。
     */

    public int singleNumber(int[] nums) {
        HashMap<Integer,Integer> hashMap = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            hashMap.put(nums[i],hashMap.getOrDefault(nums[i],0)+1);
        }

        for(int i = 0 ; i < nums.length; i++){
            if (hashMap.get(nums[i]) == 1){
                return nums[i];
            }
        }
        return 0;
    }

    public static void main(String[] args) {
        LeetCode136 leetCode136 = new LeetCode136();
        int arr[] = new int[]{4,1,2};
        System.out.println(arr.length / 2);
    }
}
