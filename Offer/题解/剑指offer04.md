## 题目

在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

 

示例:

现有矩阵 matrix 如下：

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。

给定 target = 20，返回 false。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

## 题解

这题虽然是mid，但是如果用暴力解的话，那就很简单，时间复杂度是O(MN)，但面试官应该不会满意这样的解法。

```java
public boolean findNumberIn2DArray(int[][] matrix, int target) {
    boolean res = false;

    if (matrix == null || matrix.length == 0 || matrix[0].length == 0){
        return res;
    }


    for(int i = 0; i < matrix.length; i++){
        for (int j = 0; j < matrix[0].length; j++){
            if (matrix[i][j] == target){
                    res = true;
            }
        }
    }
    return res;
}
```

### 优化解法

如果把这个矩阵旋转45°，并把它转换为图形，就会发现和二叉搜索树一样，这样通过根节点开始搜索，遇到比target大的元素就去左子树，反之亦然，就可以找到目标值target。“根节点” 对应的是矩阵的 “左下角” 和 “右上角” 元素。

