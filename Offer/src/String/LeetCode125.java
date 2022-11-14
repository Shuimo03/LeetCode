package String;

public class LeetCode125 {

   static class Solution {
        public boolean isPalindrome(String s) {
            int left = 0, right = s.length()-1;
            while(left < right){
                while(left < right && !Character.isLetterOrDigit(s.charAt(left))){
                   left++;
               }
                while (left < right && !Character.isLetterOrDigit(s.charAt(right))){
                    right--;
                }

            }
            return true;
        }
    }

    public static void main(String[] args) {
            Solution solution = new Solution();
            boolean res =  solution.isPalindrome("A man, a plan, a canal: Panama");
            System.out.println(res);
    }
}
