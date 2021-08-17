//public class Offer68 {
//    class TreeNode {
//        int val;
//        TreeNode left;
//        Offer55.TreeNode right;
//
//        TreeNode() {
//        }
//
//        TreeNode(int val) {
//            this.val = val;
//        }
//
//        TreeNode(int val, TreeNode left, Offer55.TreeNode right) {
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
//        while (root != null){
//            if (root.val < p.val && root.val < q.val){
//                root =  root.right;
//            }
//            else if(root.val > p.val && root.val > q.val){
//                root = root.left;
//            }
//            else {
//                break;
//            }
//        }
//        return root;
//    }
//}
