//package DFS;
//
//
//import java.util.ArrayList;
//import java.util.LinkedList;
//import java.util.List;
//
//public class LeetCode102 {
//
//    class TreeNode{
//        int val;
//        TreeNode left;
//        TreeNode right;
//        TreeNode(){}
//        TreeNode(int val){this.val = val;}
//        TreeNode(int val, LeetCode98.TreeNode left, LeetCode98.TreeNode right){
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//    public List<List<Integer>> levelOrder(TreeNode root) {
//        List<List<Integer>> list  = new ArrayList<List<Integer>>();
//        DFS(list,root,0);
//        return list;
//    }
//
//    private void DFS(List<List<Integer>> list,TreeNode root, int height){
//        if (root == null){
//            return;
//        }
//        if (height >= list.size()){
//            list.add(new LinkedList<Integer>());
//        }
//        list.get(height).add(root.val);
//        DFS(list,root.left,height+1);
//        DFS(list,root.right,height+1);
//    }
//}
