package BaiDu;

public class LeetCode105 {

    class TreeNode{
        int val;
        TreeNode left;
        leetCode104.TreeNode right;
        TreeNode(){}
        TreeNode(int val){this.val = val;}
        TreeNode(int val, TreeNode left, leetCode104.TreeNode right){
            this.val = val;
            this.left = left;
            this.right  = right;
        }
    }

    public TreeNode buildTree(int[] preorder, int[] inorder){
        return buildTreeHelp(preorder,0,preorder.length,inorder,0,inorder.length);
    }

    private TreeNode buildTreeHelp(int[] preorder, int start,int end,int[] inorder,int i_start, int i_end){
        if (start == end){
            return null;
        }

        int rootVal = preorder[start];
        TreeNode root = new TreeNode(rootVal);
        int rootIndex = 0;
        //遍历中序遍历,查找根节点,划分左右子树
        for(int i = i_start; i < i_end; i++){
            if (rootVal == inorder[i]){
                rootIndex = i;
                break;
            }
        }

        int leftNum = rootIndex-i_start;
        root.left = buildTreeHelp(preorder,start+1,start+leftNum+1,inorder,i_start,i_end);
        root.right = buildTree(preorder, start + leftNum + 1, end, inorder, rootIndex + 1, i_end);
        return root;
    }

    private leetCode104.TreeNode buildTree(int[] preorder, int i, int end, int[] inorder, int i1, int i_end) {
        return  null;
    }
}

