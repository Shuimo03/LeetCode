//package Tree;
//
//import java.util.ArrayDeque;
//import java.util.Queue;
//
//public class LeetCode112 {
//    class TreeNode {
//        int val;
//        LeetCode101.TreeNode left;
//        LeetCode101.TreeNode right;
//
//        TreeNode(int val) {
//            this.val = val;
//        }
//
//        TreeNode(int val, LeetCode101.TreeNode left, LeetCode101.TreeNode right) {
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//
//    /**
//     * BFS+两个队列,其中一个队列保存遍历过程中的节点,一个保存过程中节点的和。
//     */
//    public boolean hasPathSum(TreeNode root, int targetSum) {
//        if (root == null){
//            return false;
//        }
//        Queue<TreeNode> nodeQueue = new ArrayDeque<>();
//        Queue<Integer> sumQueue = new ArrayDeque<>();
//        //添加根节点和根结点的值
//        nodeQueue.offer(root);
//        sumQueue.offer(root.val);
//
//        while (!nodeQueue.isEmpty()){
//            TreeNode now = nodeQueue.poll(); // 当前节点
//            int temp = sumQueue.poll();
//            if(now.left == null && now.right == null){
//                if (temp == targetSum){
//                    return true;
//                }
//                continue;
//            }
//
//            if (now.left != null){
//                nodeQueue.offer(now.left);
//                sumQueue.offer(now.left.val + temp);
//            }
//            if (now.right != null){
//                nodeQueue.offer(now.right);
//                sumQueue.offer(now.right.val+temp);
//            }
//        }
//        return false;
//    }
//}
