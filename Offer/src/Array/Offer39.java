package Array;

import java.util.Arrays;
import java.util.HashMap;

public class Offer39 {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> hashMap = new HashMap<>();
        for(Integer num: nums){
            hashMap.put(num,hashMap.getOrDefault(num,0)+1);
            if(hashMap.get(num) > nums.length /2){
                return num;
            }
        }
        return 0;
    }

    public static void main(String[]args){
        int[]nums = new int[]{1, 2, 3, 2, 2, 2, 5, 4, 2};
        HashMap<Integer,Integer> hashMap = new HashMap<>();
        for(Integer num: nums){
            hashMap.put(num,hashMap.getOrDefault(num,0)+1);
            if(hashMap.get(num) > nums.length /2){
                System.out.println(num);
            }
        }
    }
}
