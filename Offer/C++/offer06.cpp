#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size();
        while(l < r){
            int nums = numbers[l]+numbers[r];
            if(nums == target){
                return {l,r};
            }
            else if (nums < target)
            {
                l++;
            }
            else{
                r--;
            }
        }
        return {};
    }
};