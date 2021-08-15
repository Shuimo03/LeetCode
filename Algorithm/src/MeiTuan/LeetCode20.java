package MeiTuan;

import java.util.Stack;

public class LeetCode20 {


    // 方法1 使用栈
    public boolean isValid(String s) {
        if(s.equals("")){
            return false;
        }

        Stack<Character> stack = new Stack<>();
        for(char c : s.toCharArray()){
            if(c == '(' || c == '[' || c == '{'){
                stack.push(c);
            }
            else if(c == ')' && stack.peek() == '(' && !stack.isEmpty()){
                stack.pop();
            }
            else if(c == '}' && stack.peek() == '{' && !stack.isEmpty()){
                stack.pop();
            }
            else if(c == ']' && stack.peek() == '[' && !stack.isEmpty()){
                stack.pop();
            }
        }
        return stack.isEmpty();
    }

    public static void main(String[] args) {
        LeetCode20 leetCode20 = new LeetCode20();
        System.out.println(leetCode20.isValid("()[]{}"));
    }
}
