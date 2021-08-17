package Strings;

import java.util.HashMap;
import java.util.Map;

public class LeetCode246 {

    public static boolean isStrobogrammatic(String num) {
        int l = 0;
        int r = num.length()-1;

        Map<Character,Character> map = new HashMap<>();
        map.put('6','9');
        map.put('6', '9');
        map.put('9', '6');
        map.put('1', '1');
        map.put('0', '0');
        map.put('8', '8');

        while (l <= r){
            if (!map.containsKey(num.charAt(l)) || !map.containsKey(num.charAt(r))){
                return false;
            }
            else{
                if (num.charAt(l) != map.get(num.charAt(r))){
                    return false;
                }
            }
            l++;
            r--;
        }
        return true;
    }


    public static void main(String[] args) {
        String num = "69";
        System.out.println(isStrobogrammatic(num));
    }
}
