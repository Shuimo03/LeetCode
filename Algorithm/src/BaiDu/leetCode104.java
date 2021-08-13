package BaiDu;

import java.util.LinkedList;
import java.util.Queue;

public class leetCode104 {

    class TreeNode{
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(){}
        TreeNode(int val){this.val = val;}
        TreeNode(int val,TreeNode left,TreeNode right){
            this.val = val;
            this.left = left;
            this.right  = right;
        }
    }

//    public int maxDepth(TreeNode root) {
//        // 比较左右子树大小,最大的那课子树就是深度
//        if (root == null){
//            return 0;
//        }
//        int left = maxDepth(root.left);
//        int right = maxDepth(root.right);
//        int max = Math.max(left,right)+1;
//        return  max;
//    }

    /**
     * BFS做法
     */
    public int maxDepth(TreeNode root){
        if (root == null){
            return 0;
        }

        Queue<TreeNode> queue = new LinkedList<>();
        queue.offer(root);
        int max = 0;
        while (!queue.isEmpty()){
            int size = queue.size();
            while (size > 0){
                TreeNode treeNode = queue.poll();
                if (treeNode.left != null){
                    queue.offer(treeNode.left);
                }
                if (treeNode.right != null){
                    queue.offer(treeNode.right);
                }
                size--;
            }
            max++;
        }
        return max;
    }
}
