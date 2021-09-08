package DynamicProgramming;

public class LeetCode309 {
    public int maxProfit(int[] prices) {
        if(prices.length == 0){
            return  0;
        }

        int n = prices.length;
        /**
         * f[i][0]:目前持有一只股票，对应的累计最大收益。
         * f[i][1]:目前不持有任何股票,并且处于冷冻期。
         * f[i][2]:目前不持有任何股票，并且不处于冷冻期中。
         */
        int[][]f = new int[n][3];
        for(int i = 0; i <n; i++){
            f[i][0] = Math.max(f[i-1][0],f[i-1][2]-prices[i]);
            f[i][1] = f[i-1][0]+prices[i];
            f[i][2] = Math.max(f[i-1][1],f[i-1][2]);
        }
        return Math.max(f[n-1][n],f[n-1][2]);
    }
}
