public class BinarySearch {

    private static int binarySearch(int []nums,int target){
        int l = 0;
        int r = nums.length;
        while(l < r){
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


    public static void main(String[] args) {
        int[]arr = new int[]{5,3,13,32};
        System.out.println(binarySearch(arr,3));
    }
}
