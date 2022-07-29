#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5){
                five++;
            }else if(bills[i] == 10){
                if(five < 0){
                    return false;
                }
                five--;
                ten++;
            }
            //贪心在这里,如果收到20,应该给找给尽量少但份额大的钱出去，优先找10和5这样的，如果没有的话就应该3张5块的。
            if(bills[i] == 20){
                if(five > 0 && ten > 0){
                    five--;
                    ten--;
                }else if(five >= 3){
                    five -=3;
                }else{
                    return false;
                } 
            }
        }
        return true;
    }
};