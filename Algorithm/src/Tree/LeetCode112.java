package Tree;

import java.util.ArrayDeque;
import java.util.Queue;

public class LeetCode112 {
    class TreeNode{
        int val;
        TreeNode left;
        LeetCode102.TreeNode right;
        TreeNode(){}
        TreeNode(int val){this.val = val;}
        TreeNode(int val, LeetCode102.TreeNode left, LeetCode102.TreeNode right){
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }


    // 做法1 DFS+递归栈
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if(root == null){
            return  false;
        }

        if(root.left == null && root.right == null){
            return root.val == targetSum;
        }
        return hasPathSum(root.left,targetSum-root.val) || hasPathSum(root.right,targetSum-root.val);
    }
}
