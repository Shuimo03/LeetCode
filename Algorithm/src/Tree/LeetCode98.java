//package Tree;
//
//import java.util.ArrayList;
//import java.util.Stack;
//
//public class LeetCode98 {
//
//    class TreeNode{
//        int val;
//        LeetCode102.TreeNode left;
//        LeetCode102.TreeNode right;
//        TreeNode(){}
//        TreeNode(int val){this.val = val;}
//        TreeNode(int val, LeetCode102.TreeNode left, LeetCode102.TreeNode right){
//            this.val = val;
//            this.left = left;
//            this.right = right;
//        }
//    }
//
//    public boolean isValidBST(TreeNode root) {
//        ArrayList<Integer> arr = new ArrayList<>();
//        arr.add(root.val);
//        Stack
//        for(int i = 0; i < arr.size(); i++){
//            if(arr.get(i) % 2 == 0){
//                boolean b = arr.indexOf(i) > root.val;
//            }
//        }
//    }
//
//    public static void main(String[] args) {
//        ArrayList arrayList = new ArrayList();
//        arrayList.add(1);
//        arrayList.add(2);
//        arrayList.add(3);
//        arrayList.add(4);
//        arrayList.add(5);
//        System.out.println(arrayList.get(0)); // 对应的值
//        System.out.println(arrayList.indexOf(1)); // 数组下标
//    }
//}
