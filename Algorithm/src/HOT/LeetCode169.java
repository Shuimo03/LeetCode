package HOT;
import java.util.HashMap;

public class LeetCode169 {
    /**
     * HashMap模板题
     */

    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> hashMap = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            hashMap.put(nums[i],hashMap.getOrDefault(nums[i],0)+1);
        }

        int halfLen = nums.length / 2;

        for(int i = 0; i < nums.length; i++){
            if(hashMap.get(nums[i]) > halfLen){
                return nums[i];
            }
        }
        return 0;
    }

    /**
     * 双指针做法
     */
    public int majorityElement2(int[] nums){
        int halfLength  = nums.length / 2;
        int l = 0;
        int r = 0;
        int cnt = 1;
        while (r++ < nums.length){
            if (nums[l] == nums[r]){
                cnt++;
            }
            else{
                cnt--;
            }

            if (cnt == 0){
                l = r+1;
                r = l;
                cnt = 1;
            }
        }
        return nums[l];
    }
}
