import java.util.ArrayList;
import java.util.Arrays;

public class Offer54 {

    class TreeNode{
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int x) {val = x;}
    }

    /**
     * 思路一:中序遍历这棵树，复制到数组中，在数组中查找第k大的树。
     */

    public int kthLargest(TreeNode root, int k){
        ArrayList<Integer> arrayList = new ArrayList<>();
        dfs(root,arrayList);
        return arrayList.get(arrayList.size()-k);
    }

    // 中序遍历

    void dfs(TreeNode root,ArrayList<Integer> arrayList){
        if (root == null) {
            return;
        }
        if (root.left != null){
            dfs(root.left,arrayList);
        }
        arrayList.add(root.val);

        if (root.right != null){
            dfs(root.right,arrayList);
        }
    }
}
