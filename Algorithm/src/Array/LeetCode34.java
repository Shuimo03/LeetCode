package Array;

public class LeetCode34 {

    public int[] searchRange(int[] nums, int target) {
        int start = binarySearch(nums,target);
        if(start == nums.length || nums[start] != target){
            return new int[]{-1,-1};
        }
        return new int[]{start,binarySearch(nums,target+1)-1};
    }

    private static int binarySearch(int []nums,int target){
        int l = 0;
        int r = nums.length;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(nums[mid] < target){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        return l;
    }
}
