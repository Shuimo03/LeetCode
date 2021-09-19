#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        int sum = pow(10,n);
        vector<int>res;
        for(int i = 1; i < sum;i++){
            res.push_back(i);
        }
        return res;
    }
};