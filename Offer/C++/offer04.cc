#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    // BFS做法
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
       if(matrix.size() == 0 || matrix[0].size() == 0){
           return false;
       }

       if(matrix[0][0] == target){
           return true;
       }
       
       int nums = matrix[0][0];
       queue<pair<int,int>> q;
       int m = matrix.size();
       int n = matrix[0].size();
       vector<int> dir = {0,1,0,-1,0};
       q.push(make_pair(0,0));
       matrix[0][0] = nums; //visited

       while(!q.empty()){

           auto coord = q.front();
           q.pop();

           for(int i = 0; i < 4; i++){

               int row =  coord.first+dir[i];
               int col = coord.second+dir[i+1];

               if(row >= 0 && row < m && col >=0 && col < n){
                   if(matrix[row][col] == target){
                       return true;
                   }
                   if(matrix[row][col] != nums){
                       q.push(make_pair(row,col));
                       matrix[row][col] = nums;
                   }
               }
           }
       }
       return false;
    }
};

int main()
{
    return 0;
}
