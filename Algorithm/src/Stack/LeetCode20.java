//package Stack;
//
//import java.util.HashMap;
//import java.util.LinkedList;
//import java.util.Stack;
//
//public class LeetCode20 {
//
//    public boolean isValid(String s) {
//        HashMap<Character,Character> hashMap = new HashMap<>(s.length());
//        hashMap.put('(',')');
//        hashMap.put('[',']');
//        hashMap.put('{','}');
//
//        if (s.length() > 0 && !hashMap.containsKey(s.charAt(0))){
//            return false;
//        }
//
//        LinkedList<Character> linkedList = new LinkedList<>() {{add('?');}};
//
//        for(Character c : s.toCharArray()){
//            if (s.length() >0 && !hashMap.containsKey(s.charAt(0))){
//                return false;
//            }
//            else if (hashMap.get(linkedList.removeLast()) != c){
//                return false;
//            }
//        }
//        return linkedList.size() == 1;
//    }
//
//}
//
