package HOT;

public class LeetCode997 {

    public static int findJudge(int n, int[][] trust) {
        int[]cnt = new int[n+1];
        for(int[]t: trust){
            cnt[t[0]]--;
            cnt[t[1]]++;
        }

        for(int i = 0; i < n; i++){
            if(cnt[i] == n-1){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int [][]arr = new int[][]{{1,2,3},{3,2,1}};
        System.out.println(LeetCode997.findJudge(1,arr));
    }
}
