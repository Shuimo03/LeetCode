#include<vector>
#include<algorithm>
#include<unordered_map>
#include<iostream>
using namespace std;

class Solution {
public:
    // 做法一 使用哈希表统计
    int hashMapSingleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> cnt;
        int res = 0;
        // 统计次数
        for(int i = 0; i < nums.size(); i++){
            ++cnt[nums[i]];
        }
        
        for(auto num: cnt){
            // second是value
            if (num.second == 1){
                // first是key
                res = num.first;
            }
        }
        return res;
    }

    // 做法二 使用二分查找
    int singleNonDuplicate(vector<int>& nums){
        int l = 0, r = nums.size()-1;
        while(l < r){
            int mid = l+(r-l)/2;
            if (nums[mid] == nums[mid ^ 1]){
                l = mid+1;
            }else{
                r = mid;
            }
        }
        return nums[l];
    }
};

int main(){
    vector<int> nums = {3,3,7,7,10,11,11};

     unordered_map<int,int> cnt;
     int res = 0;
        for(int i = 0; i < nums.size(); i++){
            ++cnt[nums[i]];
        }
    // for (auto x: cnt){
    //     cout << "Key:[" << x.first << "] Value:[" << x.second << "]\n";
    // }
    //     cout << " "<<endl;

         for(auto num: cnt){
            if (num.second == 1){
                res = num.first;
            }
         }
         cout << nums[res] << endl;
}