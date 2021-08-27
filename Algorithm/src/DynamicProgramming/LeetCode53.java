package DynamicProgramming;

public class LeetCode53 {

    public int maxSubArray(int[] nums) {
        if(nums.length == 0){
            return nums[0];
        }

        int numLength = nums.length;
        int dp[] = new int[numLength];
        dp[0] = nums[0];
        int maxNum = nums[0];

        for(int i = 1; i < numLength; i++){
            dp[i] = Math.max(nums[i],nums[i]+dp[i-1]);
            maxNum = Math.max(maxNum,dp[i]);
        }
        return maxNum;
    }
}
