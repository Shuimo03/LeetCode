import java.util.Arrays;

public class Offer45 {
    public String minNumber(int[] nums) {
        String[]strs = new String[nums.length];
        for(int i = 0; i < nums.length; i++){
            strs[i] = String.valueOf(nums[i]);
        }
        Arrays.sort(strs,(x,y)->(x+y).compareTo(y+x));
        StringBuffer stringBuffer = new StringBuffer();
        for(String s: strs){
            stringBuffer.append(s);
        }
        return stringBuffer.toString();
    }

    public static void main(String[] args) {
        Offer45 offer45 = new Offer45();
        int num[] = {10,2};
        System.out.println(offer45.minNumber(num));
    }
}
