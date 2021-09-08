//package DFS;
//
//import java.util.*;
//
//public class LeetCode113 {
//
//    class TreeNode{
//        int val;
//        LeetCode98.TreeNode left;
//        LeetCode98.TreeNode right;
//        TreeNode(){}
//        TreeNode(int val){this.val = val;}
//        TreeNode(int val, LeetCode98.TreeNode left, LeetCode98.TreeNode right){
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//    List<List<Integer>> res = new LinkedList<>();
//
//    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
//        if (root == null){
//            return  res;
//        }
//        Deque<Integer> stack = new ArrayDeque<>();
//        DFS(root,targetSum,stack);
//        return res;
//    }
//
//    private void DFS(TreeNode root, int sum,Deque<Integer> path){
//        path.push(root.val);
//        if (root.left == null && root.right == null){
//            if (sum == root.val) {
//                res.add(new ArrayList<Integer>(path));
//            }
//        }
//
//        if(root.left != null){
//            DFS(root.left,sum-root.val,path);
//        }
//        if (root.right != null){
//            DFS(root.right,sum-root.val,path);
//        }
//        path.pop();
//    }
//}
