#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    // bool canJump(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     if(nums[0] == 0 && nums.size() > 0){
    //         return false;
    //     }
    //     for(int i = 0; i < nums.size(); i++){
    //         if(i += nums[i] >= nums.size()){
    //             return true;
    //         }
    //     }
    // }

    bool canJump(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i <= ans){
                ans = max(ans,i+nums[i]);
                if(ans >= nums.size()-1){
                    return true;
                }
            }
        }
        return false;
    }
};