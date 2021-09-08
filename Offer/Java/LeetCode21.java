public class LeetCode21 {

    public int[] exchange(int[] nums) {

        int numLength = nums.length;
        int res[] = new int[numLength];
        int index = 0;

        for (int i = 0; i < numLength; i++){
            if (nums[i] % 2 == 0){
                res[index++] = nums[i];
            }
        }

        for (int i = 0; i < numLength; i++){
            if (nums[i] % 2 == 1){
                res[index++] = nums[i];
            }
        }
        return res;
    }
}
