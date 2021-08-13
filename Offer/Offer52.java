import java.util.HashMap;

public class Offer52 {

    public int lengthOfLongestSubstring(String s) {

        HashMap<Character,Integer> hashMap = new HashMap<>(s.length());
        int res = 0;
        int i = -1;
        /**
         * j指针遍历字符串,哈希表统计字符s[j]最后一次出现的索引位置。
         */
        for(int j = 0; j < s.length(); j++){
            if (hashMap.containsKey(s.charAt(j))){
                i = Math.max(i,hashMap.get(s.charAt(j)));
            }
            hashMap.put(s.charAt(j),j);
            res = Math.max(res,j-i);
        }
        return res;
    }
}
