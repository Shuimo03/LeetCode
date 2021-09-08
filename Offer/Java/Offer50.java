import java.util.HashMap;

public class Offer50 {
    public char firstUniqChar(String s) {
        HashMap<Character,Boolean> hashMap = new HashMap<>(s.length());
        char[]sc = s.toCharArray();
        for(char c: sc){
            hashMap.put(c,!hashMap.containsKey(c));
        }
        for(char c: sc){
            if (hashMap.get(c)){
                return c;
            }
        }
        return ' ';
    }
}
