package Test;

import java.util.Timer;

public class Test1 {


    private int subStringlength(String string){
        if (string.length() == 0 || string.equals("")){
            return 0;
        }
        return 1;
    }

    public static void main(String[] args) {
        String s = "abcabcbb";
        System.out.println(s.substring(0,3));
    }
}
