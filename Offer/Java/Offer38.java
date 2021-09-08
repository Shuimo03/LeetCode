import java.util.HashSet;
import java.util.Set;

/**
 * 解题知识点
     * DFS
     * 回溯
 */
public class Offer38 {

    int N = 10;
    Set<String> set = new HashSet<>();
    boolean[]vis = new boolean[N];

    public String[] permutation(String s) {
            char[]cs = s.toCharArray();
            DFS(cs,0,"");
            String[]ans = new String[set.size()];
            int index = 0;
            for(String str:set){
                ans[index++] = str;
            }
            return ans;
    }

    /**
     *
     * @param cs 原字符串
     * @param u 当前决策到目标字符串的那一位
     * @param cur 当前目标字符串
     */
    void  DFS(char[]cs, int u, String cur){
        int n = cs.length;
        if (u == n){
            set.add(cur);
            return;
        }
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                vis[i] = true;
                DFS(cs,u+1,cur+String.valueOf(cs[i]));
                vis[i] = false;
            }
        }
    }
}
