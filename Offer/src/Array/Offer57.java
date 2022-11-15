package Array;

public class Offer57 {
    public int[] twoSum(int[] nums, int target) {
        int left = 0, right = nums.length;
        while (left < right){
            if(nums[left]+nums[right] == target){
                return new int[]{left,right};
            }else if (nums[left]+nums[right] < target){
                left++;
            }else{
                right--;
            }
        }
        return new int[]{};
    }
}
