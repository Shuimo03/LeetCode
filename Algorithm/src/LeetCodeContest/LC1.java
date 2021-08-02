package LeetCodeContest;

public class LC1 {

    /**
     * 暴力解
     * 时间复杂度O(n)
     */

    public boolean isThree(int n) {
        int cnt = 0;
        boolean flag = false;
        for(int i = 1; i < 10001; i++){
            if (n % i  == 0){
                cnt++;
            }
        }
        if (cnt == 3){
            flag = true;
            return flag;
        }
        return flag;
    }

    public static void main(String[] args) {
        LC1 lc1 = new LC1();
        System.out.println(lc1.isThree(4));
    }
}
