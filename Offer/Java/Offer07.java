import java.util.HashMap;

public class Offer07 {
    public class TreeNode{
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode (int x){val = x;}
    }

    int[] preorder;
    HashMap<Integer,Integer> dic = new HashMap<>();
    public TreeNode buildTree(int[] preorder, int[] inorder){
        this.preorder = preorder;
        for(int i = 0; i < inorder.length; i++){
            dic.put(inorder[i],i);
        }
        return recur(0,0,inorder.length-1);
    }

    TreeNode recur(int root, int left, int right){
        if (left > right) return null;
        TreeNode node = new TreeNode(preorder[root]);
        int i = dic.get(preorder[root]);
        node.left = recur(root+1,left,i-1);
        node.right = recur(root+i-left+1,i+1,right);
        return node;
    }
}
