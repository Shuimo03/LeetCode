package Array;

import java.util.Arrays;
import java.util.HashMap;

public class leetCode1 {

    //双指针写法
//    public int[] twoSum(int[] nums, int target) {
//        int[] copyNums = new int[nums.length];
//        System.arraycopy(nums, 0, copyNums, 0, nums.length);
//        Arrays.sort(copyNums);
//        int pre = 0;
//        int latter = 1;
//        boolean isTwo = false;
//        for (int i = 0; i < copyNums.length; i++) {
//            if (copyNums[pre] + copyNums[latter] == target) {
//                isTwo = true;
//                break;
//            } else if (copyNums[pre] + copyNums[latter] < target) {
//                pre++;
//            } else {
//                latter--;
//            }
//        }
//        int value1 = copyNums[pre];
//        int value2 = copyNums[latter];
//        int []res = new int[2];
//        int index = 0;
//
//            for (int i = 0; i < nums.length && index < 2; i++) {
//
//                if (nums[i] == value1 || nums[i] == value2) {
//                    res[index++] = i;
//                }
//            }
//
//            if (index == 2) {
//                return res;
//            } else {
//                return null;
//            }
//
//        }

    // 哈希表做法
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> hashMap = new HashMap<>(nums.length);
        for(int i = 0; i < hashMap.size(); i++){
            if (hashMap.containsKey(target-nums[i])){
                return  new int[]{hashMap.get(target-nums[i]),i};
            }
            hashMap.put(nums[i],i);
        }
        return new  int[0];
    }
}
