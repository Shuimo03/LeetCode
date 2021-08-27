package DFS;

public class LeetCode98 {

        class TreeNode{
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(){}
        TreeNode(int val){this.val = val;}
        TreeNode(int val, TreeNode left, TreeNode right){
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public boolean isValidBST(TreeNode root) {
        return DFS(root,null,null);
    }

    private boolean DFS(TreeNode root, Integer min,Integer max){
        if(root == null){
            return true;
        }
        if((max != null && root.val >= max) || (min != null && root.val <= min)){
            return false;
        }
        return DFS(root.left,min,root.val) && DFS(root.right,root.val,max);
    }
}
