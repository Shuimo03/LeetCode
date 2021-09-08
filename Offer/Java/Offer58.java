import java.util.Stack;

public class Offer58 {

    public String reverseWords(String s) {
        s.trim(); //删除首尾空格
        int j = s.length()-1 ,i = j;
        StringBuilder res = new StringBuilder();

        while (i >= 0){
            while (i >= 0 && s.charAt(i) != ' '){
                i--;
            }
            res.append(s.substring(i+1,j+1)+" ");
            while (i >= 0 && s.charAt(i) == ' '){
                i--;
            }
            j = i;
        }
        return res.toString().trim();
    }

    public static void main(String[] args) {
        Offer58 offer58 = new Offer58();
        System.out.println(offer58.reverseWords("the sky is blue"));
    }
}
