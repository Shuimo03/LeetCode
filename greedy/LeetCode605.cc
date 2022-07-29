#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    //     int cnt = 0;
    //     for(int i = 0; i < flowerbed.size();i++){
    //         if(flowerbed[i] == 1){
    //             if(flowerbed[i+2] ==0 &&flowerbed[i-1] == 0 && flowerbed[i+1] == 0 ){
    //                 flowerbed[i+2] = 1;
    //                 cnt++;
    //             }
    //         }
    //         else if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
    //             flowerbed[i] == 1;
    //             cnt++;
    //         }
    //     }
    //     if(cnt >= n){
    //         return true;
    //     }        
    //     return false;
    // }


    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)){
                cnt++;
                flowerbed[i] = 1;
            }
        }
        return cnt >= n;
    }
     
};