package May

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func sumRootToLeaf(root *TreeNode) int {
	res := dfs(root, root.Val)
	return res
}

func dfs(root *TreeNode, val int) int {
	//终止条件
	if root == nil {
		return 0
	}
	val = val<<1 | root.Val
	if root.Left == nil && root.Left == nil {
		return val
	}
	return dfs(root.Left, val) + dfs(root.Right, val)
}
