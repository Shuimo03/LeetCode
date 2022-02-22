#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        //区间
        for(int i = 1; i <= num; i++){
            if(sum(i) %2 == 0){
                ans++;
            }
        }
        return ans;
    }

    int  sum(int num){
        int ans = 0;
        while (num > 0){
            ans += num%10;
            num/=10;
        }
        return ans;
    }
};
