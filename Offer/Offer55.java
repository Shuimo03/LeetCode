public class Offer55 {

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

    public boolean isBalanced(TreeNode node){
        if (node == null){
            return true;
        }
        if(!isBalanced(node.left)){
            return false;
        }
        if (!isBalanced(node.right)){
            return false;
        }

        int left = getDepth(node.left);
        int right = getDepth(node.right);

        if(Math.abs(right-left) > 1){
            return false;
        }
        return true;
    }

        private int getDepth(TreeNode node){
        if (node == null){
            return 0;
        }
        int left = getDepth(node.left)+1;
        int right = getDepth(node.right)+1;

        return  right > left ? right:1;
    }
}
