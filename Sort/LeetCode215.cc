#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

/**
 * @wuliang
 * k-th element问题,一般使用快速选择，使用库函数的话时间复杂度是O(NlogN),这题的最优解是O(n)。
 */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};