package Strings;

public class LeetCode243 {
    public int shortestDistance(String[] wordsDict, String word1, String word2) {

        int idx = -1, res = Integer.MAX_VALUE;
        for(int i = 0; i < wordsDict.length; i++){
            if(wordsDict[i].equals(word1) || word2.equals(word2)){
                if(idx != -1 && wordsDict[idx] != wordsDict[i]){
                    res = Math.min(res,i-idx);
                }
                idx = i;
            }
        }
        return res;
    }

}
