package Strings;

import java.util.Collection;
import java.util.Collections;
import java.util.LinkedList;

public class LeetCode394 {

    int ptr;

    public String decodeString(String s) {
        LinkedList<String> stack = new LinkedList<>();
        ptr = 0;

        while (ptr < s.length()){
            char cur = s.charAt(ptr);

            if(Character.isDigit(ptr)){
                String digits = getDigits(s);
            }else if(Character.isLetter(cur) || cur == '['){
                stack.addLast(String.valueOf(s.charAt(ptr++)));
            }else{
                ++ptr;
                LinkedList<String> sub = new LinkedList<>();
                while (!"[".equals(stack.peekLast())) {
                    sub.addLast(stack.removeLast());
                }
                Collections.reverse(sub);

                stack.removeLast();
                int repTime = Integer.parseInt(stack.removeLast());
                StringBuffer stringBuffer = new StringBuffer();
                String o = getString(sub);

                while (repTime --> 0){
                    stringBuffer.append(o);
                }
                stack.addLast(stringBuffer.toString());
            }
        }
        return getString(stack);
    }

    private String getDigits(String s){
        StringBuffer ret = new StringBuffer();
        while (Character.isDigit(s.charAt(ptr))){
            ret.append(s.charAt(ptr++));
        }
        return ret.toString();
    }

    private String getString(LinkedList<String> list){
        StringBuffer ret = new StringBuffer();
        for(String s: list){
            ret.append(s);
        }
        return ret.toString();
    }
}
