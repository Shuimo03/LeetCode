package DynamicProgramming;

public class LeetCode337 {

      public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
          this.left = left;
          this.right = right;
      }
  }

    public int rob(TreeNode root) {
        int[]nums = DFS(root);
        return Math.max(nums[0],nums[1]);
    }

    private int[] DFS(TreeNode root){
          if (root == null){
              return  new int[2];
          }
         int[]left = DFS(root.left);
         int[]right = DFS(root.right);
         int[]res = new int[2];
         res[0] = left[1]+right[1]+root.val;
         res[1] = Math.max(left[0],left[1])+Math.max(right[0],right[1]);
         return res;
    }
}
