package Tree;

public class LeetCode101 {

    class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

        public boolean isSymmetric(TreeNode root) {
            if (root == null){
                return true;
            }
            boolean res = DFS(root.left,root.right);
            return res;
        }

        boolean DFS(TreeNode left,TreeNode right){
            if (left == null && right == null){
                return true;
            }

            if (left == null || right == null){
                return true;
            }

            if (left.val != right.val){
                return false;
            }
           return DFS(left.left,right.right) && DFS(left.right, right.left);
        }
}