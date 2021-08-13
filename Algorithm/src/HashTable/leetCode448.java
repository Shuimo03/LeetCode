package HashTable;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class leetCode448 {

    public List<Integer> findDisappearedNumbers(int[] nums) {
        Arrays.sort(nums);
        HashMap<Integer,Integer> hashMap = new HashMap<>(nums.length);
        for(Integer num : nums){
            hashMap.put(num,nums[num]);
        }
        return null;
    }
}
