package Array;

import java.util.ArrayList;
import java.util.List;

class TreeNode{
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

public class LeetCode114 {

    public void flatten(TreeNode root) {
        List<TreeNode> list = new ArrayList<TreeNode>();
        preorder(root,list);
        int size = list.size();
        for(int i = 1; i < size; i++){
            TreeNode prev = list.get(i-1),curr = list.get(i);
            prev.left = null;
            prev.right = curr;
        }
    }

    private void  preorder(TreeNode treeNode, List<TreeNode> nodeList){
        if(treeNode != null){
            nodeList.add(treeNode);
            preorder(treeNode.left,nodeList);
            preorder(treeNode.right,nodeList);
        }
    }
}
