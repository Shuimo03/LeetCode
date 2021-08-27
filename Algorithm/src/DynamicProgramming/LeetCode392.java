package DynamicProgramming;

public class LeetCode392 {

    public boolean isSubsequence(String s, String t) {

        String[]str1 = s.split("");
        String[]str2 = t.split("");
        String[]str3 = new String[s.length()];
        for(int i = 0; i < str2.length ;i++){
            if (str1[i] == str2[i]){
                str3[i] = str1[i];
            }
        }
        return str3.equals(str1);
    }
}
