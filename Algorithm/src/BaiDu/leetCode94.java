package BaiDu;

import java.util.LinkedList;
import java.util.List;
import java.util.Stack;

public class leetCode94 {

    class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

//    public List<Integer> inorderTraversal(TreeNode root){
//        LinkedList linkedList =  new LinkedList<>();
//        inorder(root,linkedList);
//        return linkedList;
//    }
//
//    public List<Integer> inorder(TreeNode root,List<Integer> res){
//        if (root == null){
//            return null;
//        }
//
//        inorder(root.left,res);
//        res.add(root.val);
//        inorder(root.right,res);
//        return res;
//    }

    public List<Integer> inorderTraversal(TreeNode root) {
        if (root == null) {
            return null;
        }
        Stack<TreeNode> stack = new Stack<>();
        LinkedList<Integer> linkedList = new LinkedList<>();
        while (root != null || stack.isEmpty()) {
            while (root != null) {
                stack.push(root);
                root = root.left;
            }
            root = stack.pop();
            linkedList.add(root.val);
            root = root.right;
        }
        return linkedList;
    }
}
