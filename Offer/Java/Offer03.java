import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class Offer03 {

    public int findRepeatNumber(int[] nums) {

        Set<Integer> set = new HashSet<>();
        for(int num:nums){
            if(set.contains(num)){
                return num;
            }
            set.add(num);
        }
        return -1;
    }
}
