#include<iostream>
#include<vector>
#include<set>


class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> st;
        for(int i=0;i<nums.size();i++){   
            long long tmp1=(long long)nums[i]-t;       
            long long tmp2=(long long)nums[i]+t;
            //在滑动窗口中, 二分查找满足条件的值
            auto s= st.lower_bound(tmp1);
            if(s!=st.end()&&*s<=tmp2){
                return true;
            }
            st.insert(nums[i]);
            if(i>=k){
                st.erase(nums[i-k]);
            }
        }
       return false;
    }
};
