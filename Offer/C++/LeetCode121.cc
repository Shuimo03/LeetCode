#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if( prices.size() == 0){
            return 0;
        }

        int maxPro = 0;
        int minNum = prices[0];

        for(int i = 1; i < prices.size(); i++){
            minNum = min(minNum,prices[i]);
            maxPro = max(prices[i]-minNum,maxPro);
        }
        return maxPro;
    }
};