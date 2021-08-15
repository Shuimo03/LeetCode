package MeiTuan;

import java.util.Stack;

public class LeetCode5 {

    //DP题
    public String longestPalindrome(String s) {
        int len = s.length();
        if(len < 2){
            return s;
        }

        int maxLen = 1;
        int begin = 0;
        boolean[][]dp = new boolean[len][len];
        for(int i = 0; i < len;i++){
            dp[i][i] = true;
        }

        char[]charChary = s.toCharArray();
        for(int L  =2; L <= len; L++){
            for(int i = 0; i < len; i++){
                int j = L+i-1;
                if(j >= len){
                    break;
                }

                if(charChary[i] != charChary[j]){
                    dp[i][j] = false;
                }else{
                    if(j-i < 3){
                        dp[i][j] = true;
                    }
                    else{
                        dp[i][j] = dp[i + 1][j - 1];
                    }
                }
                if(dp[i][j] && j-i+1 > maxLen){
                    maxLen = j-i+1;
                    begin = i;
                }
            }
        }
        return s.substring(begin,begin+maxLen);
    }

    public static void main(String[] args) {
        LeetCode5 leetCode5 = new LeetCode5();
        System.out.println(leetCode5.longestPalindrome(""));
    }
}