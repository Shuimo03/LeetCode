//package Tree;
//
//import java.util.HashMap;
//
//public class LeetCode106 {
//
//    class TreeNode {
//        int val;
//        TreeNode left;
//        TreeNode right;
//
//        TreeNode(int val) {
//            this.val = val;
//        }
//
//        TreeNode(int val, TreeNode left, LeetCode101.TreeNode right) {
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//    // memo:保存中序遍历序列中元素和索引的位置关系
//    HashMap<Integer,Integer> memo = new HashMap<>();
//    int[]post;
//
//    public TreeNode buildTree(int[] inorder, int[] postorder) {
//        for(int i  = 0 ; i < inorder.length; i++){
//            memo.put(inorder[i],i);
//        }
//        post = postorder;
//        TreeNode root = buildTree(0, inorder.length - 1, 0, post.length - 1);
//        return root;
//    }
//
//    /**
//     *
//     * @param is 左子树-中序数组
//     * @param ie
//     * @param ps 左子树-后序数组 ps = ps
//     * @param pe
//     * @return
//     */
//    private TreeNode buildTree(int is,int ie,int ps,int pe){
//
//        if(ie < is || ps < ps) {
//            return null;
//        }
//
//        int root = post[pe];
//        int ri = memo.get(root);
//
//        TreeNode node = new TreeNode(root);
//        node.left = buildTree(is, ri - 1, ps, ps + ri - is - 1);
//        node.right = buildTree(ri + 1, ie, ps + ri - is, pe - 1);
//        return  node;
//    }
//}
