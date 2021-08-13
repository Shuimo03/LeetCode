//package BaiDu;
//import java.util.LinkedList;
//import java.util.List;
//import java.util.Queue;
//
//public class LeetCode102 {
//
//    class TreeNode{
//
//        int val;
//        leetCode104.TreeNode left;
//        leetCode104.TreeNode right;
//        TreeNode(){}
//        TreeNode(int val){this.val = val;}
//        TreeNode(int val, leetCode104.TreeNode left, leetCode104.TreeNode right){
//            this.val = val;
//            this.left = left;
//            this.right  = right;
//        }
//    }
//
//    // 队列+BFS
//    public List<List<Integer>> levelOrder(TreeNode root) {
//        // 使用二维数组来存放结果
//        List<List<Integer>> res = new LinkedList<>();
//
//        // 如果传输入的树为空的话,就直接返回res,res没有添加任何元素，所以也是空的.
//        if (root ==  null){
//            return res;
//        }
//
//        Queue<TreeNode> queue = new LinkedList<>();
//        queue.add(root);
//        while (!queue.isEmpty()){
//            int size = queue.size();
//            //当前一层的res
//            List<Integer> currentRes = new LinkedList<>();
//
//            while (size > 0){
//                TreeNode current = queue.poll();
//
//                if (current == null){
//                    continue;
//                }
//                currentRes.add(current.val);
//
//                //左右子树入队列
//                if (current.left  != null){
//                    queue.add(current.left);
//                }
//                else if(current.right != null){
//                    queue.add(current.right);
//                }
//                size--;
//            }
//            res.add(currentRes);
//        }
//        return res;
//    }
//}
