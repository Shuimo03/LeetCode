#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int>res;
        for(int i = 0; i <m; i++){
            for(int j = 0; j < n; j++){
                bool isMin = true,isMax = true;
                for(int k = 0; k <  n; k++){
                    if(matrix[i][k] < matrix[i][j]){
                        isMin = false;
                        break;
                    }
                }
                if(!isMin){
                    continue;
                }
                for(int k = 0; k < m; k++){
                    if (matrix[k][j] > matrix[i][j]){
                        isMax = false;
                        break;
                    }
                }
                if (isMax){
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
    }
};
