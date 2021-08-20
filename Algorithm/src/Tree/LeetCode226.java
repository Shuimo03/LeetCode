package Tree;

import java.util.Deque;
import java.util.LinkedList;

public class LeetCode226 {

    class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    /** 方法1标准DFS 利用递归栈
     * 方法2 DFS使用库方法
     */
    public TreeNode invertTree(TreeNode root) {
        if(root == null){
            return null;
        }

        TreeNode left = root.left;
        TreeNode right = root.right;

        root.left = invertTree(root.right);
        root.right = invertTree(root.left);
        return root;

        // 方法二
//        Deque<TreeNode> stack = new LinkedList<>();
//        stack.push(root);
//
//        while(!stack.isEmpty()){
//            TreeNode node = stack.pop();
//            TreeNode left = node.left;
//            node.left = node.right;
//            node.right = left;
//
//            if(node.left != null){
//                stack.push(node.left);
//            }
//            if(node.right != null){
//                stack.push(node.right);
//            }
//        }
//        return root;
    }
}
