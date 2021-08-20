package Strings;

public class LeetCode647 {

    //Manacher算法
    public int countSubstrings(String s) {
        int n = s.length();
        StringBuffer t = new StringBuffer("$#");
        for(int i = 0; i < n; i++){
            t.append(s.charAt(i));
            t.append('#');
        }
        n = t.length();
        t.append('!');

        int[]f = new int[n];
        int iMax = 0, rMax = 0, ans = 0;
        for(int i = 1; i < n; i++){
            f[i] = i <= rMax ? Math.min(rMax-i+1,f[2 * iMax-i]) : 1;

            while (t.charAt(i+f[i]) == t.charAt(i-f[i])){
                ++f[i];
            }

            if(i+f[i]-1 > rMax){
                iMax = i;
                rMax = i+f[i]-1;
            }
            ans += f[i] / 2;
        }
        return ans;
    }

}

