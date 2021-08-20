package Tree;

import java.util.*;

public class LeetCode102 {

    class TreeNode{
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(){}
        TreeNode(int val){this.val = val;}
        TreeNode(int val, TreeNode left, TreeNode right){
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }


    public List<List<Integer>> levelOrder(TreeNode root){
        ArrayList<List<Integer>> res = new ArrayList<>();
        if(root == null){
            return res;
        }
        // 每一层节点
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);

        while (!queue.isEmpty()){
            // 存放每一层节点的值
            ArrayList<Integer> arrayList = new ArrayList<>();
            int size = queue.size();

            // 遍历树
            for(int i = 0; i < size; i++){
                // 记录每一个节点
                TreeNode node = queue.remove();
                arrayList.add(node.val);

                if(node.left != null){
                    queue.add(node.left);
                }
                if(node.right != null){
                    queue.add(node.right);
                }
            }
            res.add(arrayList);
        }
        return res;
    }

}
