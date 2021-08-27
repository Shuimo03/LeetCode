package Stack;

import java.util.Arrays;

public class LeetCode581 {

    public int findUnsortedSubarray(int[] nums) {
        if (isSorted(nums)){
            return 0;
        }
        int[]numSorted = new int[nums.length];
        System.arraycopy(nums,0,numSorted,0,nums.length);
        quickSort(numSorted,0,numSorted.length-1);
        int left = 0;
        while (nums[left] == numSorted[left]){
            left++;
        }
        int right = nums.length-1;
        while (nums[right] == numSorted[right]){
            right--;
        }
        return right-left+1;
    }

    private static void quickSort(int arr[],int start, int end){

        if (start >= end){
            return;
        }

        int l = start;
        int r = end;

        int pos = arr[l+(r-l)/2];
        while (l <= r){

            while (l <= r && arr[l] < pos){
                l++;
            }
            while (l <= r && arr[r] > pos){
                r--;
            }

            if (l <= r){
                int temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;

                l++;
                r--;
            }
        }
        quickSort(arr,start,r);
        quickSort(arr,l,end);
    }

    public boolean isSorted(int[]nums){
        for(int i = 1; i < nums.length; i++){
            if (nums[i] < nums[i-1]){
                return false;
            }
        }
        return true;
    }

}
