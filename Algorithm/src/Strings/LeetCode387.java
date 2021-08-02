package Strings;

import java.util.HashMap;

public class LeetCode387 {

    /**
     * 使用哈希表
     */
    public int firstUniqChar(String s) {
        HashMap<Character,Integer> hashMap = new HashMap<>();
        for(int i = 0;  i < s.length();i++){
            char ch = s.charAt(i);
            hashMap.put(ch,hashMap.getOrDefault(ch,0)+1);
        }

        for(int i = 0; i < s.length(); i++){
            if (hashMap.get(s.charAt(i)) == 1){
                return i;
            }
        }
        return -1;
    }

    /**
     * 双指针写法
     */
    public int firstUniqChar2(String s) {
        for(int i = 0; i < s.length(); i++){
            int first = s.indexOf(s.charAt(i));
            int slow  = s.lastIndexOf(s.charAt(i));
            if(first == slow){
                return i;
            }
        }
        return -1;
    }
}
