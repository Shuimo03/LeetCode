package backtracking;

import java.util.ArrayList;
import java.util.List;

public class LeetCode131 {

    List<List<String>> res;
    ArrayList<String> cur;

    public List<List<String>> partition(String s) {
            res = new ArrayList<>();
            cur = new ArrayList<>();
            backTrack(s,0);
            return res;

    }

    // 回溯算法
    public void backTrack(String str, int l){
        if(cur.size() > 0 && l >= str.length()){
            List<String> r = (ArrayList<String>) cur.clone();
            res.add(r);
        }

        for(int i = l; i < str.length(); i++){
            if (isPalindrome(str,l,i)){
                if (l == i){
                    cur.add(Character.toString(str.charAt(i)));
                }
                else{
                    cur.add(str.substring(l,i+1));
                }
                backTrack(str,i+1);
                cur.remove(cur.size()-1);
            }
        }
    }

    public boolean isPalindrome(String str, int l, int r){
        if (l == r) {
            return true;
        }
        while (l < r){
            if(str.charAt(l) != str.charAt(r)) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}
