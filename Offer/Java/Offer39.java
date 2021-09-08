import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class Offer39 {

    private Map<Integer,Integer>countNums(int[] nums){
        Map<Integer,Integer> counts = new HashMap<>();
        for(int num: nums){
            if(!counts.containsKey(num)){
                counts.put(num,1);
            }else {
                counts.put(num,counts.get(num)+1);
            }
        }
        return counts;
    }

    public int majorityElement(int[] nums) {
        Map<Integer,Integer> counts = countNums(nums);
        Map.Entry<Integer,Integer> majorityEntry = null;
        for (Map.Entry<Integer, Integer> entry : counts.entrySet()) {
            if (majorityEntry == null || entry.getValue() > majorityEntry.getValue()) {
                majorityEntry = entry;
            }
        }
        return majorityEntry.getKey();
    }

    public static void main(String[] args) {
        int nums[] = new int[]{6,6,6,7,7};
        Offer39 offer39 = new Offer39();
        System.out.println(offer39.majorityElement(nums));
    }
}
