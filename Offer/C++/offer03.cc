#include<iosteam>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        // if(nums.size() == 0){
        //     return 0;
        // }
        // sort(nums.begin(),nums.end());

        // int l = 0;
        // int r = 1;
        
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == nums[r]){
        //         return nums[i];
        //     }
        //     l++;
        //     r++;
        // }
        // return 0;

    unordered_map<int,bool> map;
    for(int num : nums){
            if(map[num]){
                return num;
            }
            map[num] = true;
        }

        return -1;
    }
};