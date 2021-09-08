public class Offer42 {

    public int maxSubArray(int[] nums) {
        if (nums.length == 1){
            return nums[0];
        }
        int res = nums[0];
        for(int i = 1; i < nums.length; i++){
            nums[i] += Math.max(nums[i-1],0);
            res = Math.max(res,nums[i]);
        }
        return res;
    }
}
