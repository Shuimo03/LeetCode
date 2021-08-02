## 题目

找出数组中重复的数字。


在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

示例 1：

输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3 

## 解题

当看到这种找重复的时候，可以考虑到使用Set和HashSet，当找到重复的数字就直接返回。

### 算法步骤

利用集合特性解题

1. 初始化：新建一个HashSet。
2. 便利数组nums中每个数组num
   1. 当num在HashSet中，说明重复，直接返回num。
   2. 将num添加到HashSet。
   3. 返回-1。

排序+双指针解题

首先将数组排序，然后使用双指针方法进行查找，这样的时间复杂度为O(n)，因为是原地交换所以空间复杂度是O(1)。

```java
public int findRepeatNumber(int[] nums){
    Arrays.sort(nums);
    int l = 0;
    int r = 1;
    for(int i = 0; i < nums.length; i++){
        if(nums[l] == nums[r]){
            return nums[i];
        }
        l++;
        r++;
    }
    return -1;
}
```
