package greedy;

import java.util.Arrays;

public class leetCode1196 {
    public int maxNumberOfApples(int[] arr) {
        Arrays.sort(arr);
        int cnt = 0;
        int maxNum = 0;
        for(int i = 0; i < arr.length; i++){
            cnt += arr[i];
            if(cnt<= 5000){
                maxNum++;
            }
        }
        return maxNum;
    }

}
