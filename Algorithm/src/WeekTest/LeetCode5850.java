package WeekTest;

import java.util.Arrays;

/**
 * 给你一个整数数组 nums ，返回数组中最大数和最小数的 最大公约数 。
 *
 * 两个数的 最大公约数 是能够被两个数整除的最大正整数。
 * 输入：nums = [2,5,6,9,10]
 * 输出：2
 * 解释：
 * nums 中最小的数是 2
 * nums 中最大的数是 10
 * 2 和 10 的最大公约数是 2
 */

public class LeetCode5850 {

    private  int gcd(int a, int b){
        int temp;
        if(b > a){
            temp = b;
            b = a;
            a = temp;
        }
        if (a % b == 0){
            return b;
        }
        return gcd(b, a % b);
    }

    public int findGCD(int[] nums) {
        if (nums.length == 0){
            return 0;
        }
        Arrays.sort(nums);
        int max = nums[nums.length-1];
        int min = nums[0];
        int maxGCD = gcd(max,min);
        return maxGCD;
    }

    public static void main(String[] args) {
        int nums [] = new int[]{2,5,6,9,10};
        Arrays.sort(nums);
        int max = nums[nums.length-1];
        int min = nums[0];
    }
}
