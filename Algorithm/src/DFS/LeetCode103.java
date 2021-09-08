//package DFS;
//
//import java.util.ArrayList;
//import java.util.LinkedList;
//import java.util.List;
//
//public class LeetCode103 {
//
//    class TreeNode {
//        int val;
//        LeetCode98.TreeNode left;
//        LeetCode98.TreeNode right;
//
//        TreeNode() {
//        }
//
//        TreeNode(int val) {
//            this.val = val;
//        }
//
//        TreeNode(int val, LeetCode98.TreeNode left, LeetCode98.TreeNode right) {
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//
//        public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
//            List<List<Integer>> list = new ArrayList<>();
//            DFS(list,root,0);
//            return list;
//        }
//
//        private void DFS(List<List<Integer>> list,TreeNode root ,int height){
//            if (root == null){
//                return;
//            }
//
//            if (list.size() <= 0){
//                List<Integer> newLevel = new LinkedList<>();
//                list.add(newLevel);
//            }
//            List<Integer> collection = list.get(height);
//            if(height % 2 == 0){
//                collection.add(root.val);
//            }
//            else{
//                collection.add(0,root.val);
//            }
//
//            DFS(list,root.left,height+1);
//            DFS(list,root.right,height+1);
//        }
//    }
//    }
