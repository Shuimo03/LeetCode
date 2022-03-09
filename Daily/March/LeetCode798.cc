#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int bestRotation(vector<int>& nums) {
        int n = nums.size();
        vector<int>diffs(n);
        for(int i =0; i < n; i++){
            int l = (i+1) % n;
            int r = (i-nums[i]+n+1)%n;
            diffs[l]++;
            diffs[r]--;
            if(l >= r){
                diffs[0]++;
            }
        }
        int bestIndex = 0;
        int maxScore = 0;
        int score = 0;
        for(int i = 0; i < n; i++){
            score += diffs[i];
            if(score > maxScore){
                bestIndex = i;
                maxScore = score;
            }
        }
        return bestIndex;
    }
};