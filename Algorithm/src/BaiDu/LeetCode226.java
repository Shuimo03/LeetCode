//package BaiDu;
//
//public class LeetCode226 {
//
//    class TreeNode{
//        int val;
//        TreeNode left;
//        TreeNode right;
//        TreeNode(){}
//        TreeNode(int val){this.val = val;}
//        TreeNode(int val, leetCode104.TreeNode left, leetCode104.TreeNode right){
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//    /**做法1 使用递归方法*/
//    public TreeNode invertTree(TreeNode root) {
//        if(root == null){
//            return null;
//        }
//        TreeNode rightTree =  invertTree(root.right);
//        TreeNode leftTree =  invertTree(root.left);
//        root.left = rightTree;
//        root.right = leftTree;
//        return  root;
//    }
//}
