package backtracking;

import java.util.ArrayList;
import java.util.List;

public class LeetCode22 {

    public List<String> generateParenthesis(int n) {
        List<String> list = new ArrayList<>();
        backtrack(list,"",0,0,n);
        return list;
    }

    /**
     *
     * @param list
     * @param str
     * @param open 开括号的数量
     * @param close 闭括号的数量
     * @param max 括号总数
     */
    private void backtrack(List<String> list,String str,int open,int close, int max){
        if (str.length() == max *2){
            list.add(str);
            return;
        }
        if (open < max){
            backtrack(list,str+"(",open+1,close,max);
        }
        if(close < open){
            backtrack(list,str+")",open,close+1,max);
        }
    }
}
