import javax.swing.text.Style;
import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.Queue;

public class Main {

    public static void main(String[] args) {
        int s1[]= new int[]{1,2,4,5,7,9};
        int s2[]= new int[]{1,2,5,6,9};
        int s3[] = new int[10];
        for(int i = 0; i < s1.length;i++){
            if(s1[i] != s2[i]){
                s3[i]  = s1[i];
            }
            else{
                s3[i] = s2[i];
            }
        }

        for(int i = 0; i < s3.length;i++){
            System.out.println(s3[i]);
        }
    }
}
