package backtracking;

public class LeetCode1863 {

    private  int sum = 0;

    public int subsetXORSum(int[] nums) {
        backtrack(nums,0,0);
        return sum;
    }

    private void backtrack(int[]nums,int z, int cur){
        if (z == nums.length){
            return;
        }
        for(int i = z; i < nums.length; i++){
            cur ^= nums[i];
            sum += cur;
            backtrack(nums,i+1,cur);
            cur ^= nums[i];
        }
    }
}
