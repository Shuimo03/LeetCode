#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        int len = flowerbed.size();
        int prev = -1;
        for(int i = 0; i < len; i++){
            if(flowerbed[i] == 1){
                if(prev < 0){
                    cnt += i/2;
                }else{
                    cnt += (i-prev-2)/2;
                }
                prev = i;
            }
        }
        if(prev < 0){
            cnt += (len+1)/2;
        }
        else{
            cnt += (len-prev-1)/2;
        }
        return cnt >=n;
    }
};