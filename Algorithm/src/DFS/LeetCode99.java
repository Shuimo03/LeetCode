package DFS;

public class LeetCode99 {
    

    class TreeNode{
        int val;
        LeetCode98.TreeNode left;
        LeetCode98.TreeNode right;
        TreeNode(){}
        TreeNode(int val){this.val = val;}
        TreeNode(int val, LeetCode98.TreeNode left, LeetCode98.TreeNode right){
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }
    
    TreeNode firstElement = null;
    TreeNode secondElement = null;
    TreeNode prevElement = new TreeNode(Integer.MIN_VALUE);

    public void recoverTree(TreeNode root) {
        traverse(root);
        int temp = firstElement.val;
        firstElement.val = secondElement.val;
        secondElement.val = temp;
    }

    private void traverse(TreeNode root){
        if (root == null){
            return;
        }
        traverse(root.left);

        if(firstElement == null && prevElement.val >= root.val){
            firstElement = prevElement;
        }

        if(firstElement != null && prevElement.val >= root.val){
            secondElement = root;
        }
        prevElement = root;

        traverse(root.right);
    }
}
