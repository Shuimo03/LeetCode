package Strings;

public class LeetCode58 {

    public int lengthOfLastWord(String s) {
        if(s.length() == 0){
            return 0;
        }
        return -1;
    }

    public static void main(String[] args) {
        String text = "luffy is still joyboy        ";
        String str[] =text.split("");
        for(int i = 0; i < str.length; i++){
            System.out.print(str[i].substring(0,str.length-text.length()));
        }
    }
}
