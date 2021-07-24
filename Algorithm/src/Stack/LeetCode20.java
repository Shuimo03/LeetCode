package Stack;

import java.util.HashMap;
import java.util.Stack;

public class LeetCode20 {

    public boolean isValid(String s) {

        boolean flag = false;

        int strLength = s.length();
        if (strLength % 2 == 1){
            return flag;
        }
        //使用哈希表来存储左括号和右括号,它的键是左括号,值是右括号
        HashMap<Character,Character> hashMap = new HashMap<>();
        hashMap.put(')','(');
        hashMap.put(']','[');
        hashMap.put('}','{');
        Stack<Character> stack = new Stack<>();

        for (int i = 0 ; i < strLength; i++){
            char ch = s.charAt(i);
            if (hashMap.containsKey(ch)){
                if (stack.isEmpty() || stack.peek() != hashMap.get(ch)){
                   return flag;
                }
                stack.pop();
            }
            else{
                stack.push(ch);
            }
        }
        flag =  stack.isEmpty();
        return flag;
    }

    public static void main(String[] args) {
        LeetCode20 leetCode20 = new LeetCode20();
        String InputTest = "()[]{}";
        System.out.println(InputTest+"Is:"+leetCode20.isValid(InputTest));
    }
}

