#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int res = 0, maxLen = 0;
        for(auto & rectangle : rectangles){
            int l = rectangle[0], w = rectangle[1];
            int k = min(l,w);
            if (k == maxLen){
                ++res;
            }else if(k > maxLen){
                res = 1;
                maxLen = k;
            }
        }
        return res;
    }
};

int main(){
    
    vector<vector<int>> rectangles = {{5,8},{3,9},{5,12},{16,5}};
    sort(rectangles.begin(),rectangles.end());
    for(int i = 0; i < rectangles.size(); i++){
        for(int j = 0; j < rectangles[i].size(); j++){
            cout <<" "<< rectangles[i][j];
        }
    }
    printf("\n");
    return 0;
}