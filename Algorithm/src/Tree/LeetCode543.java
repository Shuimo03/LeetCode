//package Tree;
//
//public class LeetCode543 {
//
//    int max = 0;
//
//   private class TreeNode {
//        int val;
//        LeetCode226.TreeNode left;
//        LeetCode226.TreeNode right;
//
//        TreeNode(int val) {
//            this.val = val;
//        }
//
//        TreeNode(int val, TreeNode left, TreeNode right) {
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//    public int diameterOfBinaryTree(TreeNode root) {
//        maxDepth(root);
//        return max;
//    }
//
//    private int maxDepth(TreeNode root){
//        if(root == null){
//            return 0;
//        }
//        int left = maxDepth(root.left);
//        int right = maxDepth(root.right);
//        max = Math.max(max,left+right);
//        return Math.max(left,right)+1;
//    }
//}
