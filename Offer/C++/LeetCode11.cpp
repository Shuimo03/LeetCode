#include<vector.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
            int len =  nums.size();
            if(len < 2){
                return 0;
            }

            unordered_map<int,int>map;
            int sum  = 0;
            map[0] = 0;
            int res = 0;
            
            for(int i = 0; i < len; i++){
                sum += nums[i];
                if(map.count(2*sum-(i+1))==0){
                    map[2*sum-(i+1)] = i+1;
                }
                else{
                    res = max(res,i+1-map[2*sum-(i+1)]);
                }
            }
            return res;
    }
};