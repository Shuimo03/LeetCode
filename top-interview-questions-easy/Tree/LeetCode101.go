package Tree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isSymmetric(root *TreeNode) bool {
	return isMirrot(root, root)
}

func isMirrot(tree1, tree2 *TreeNode) bool {

	//定义边界条件
	if tree1 == nil && tree2 == nil {
		return true
	}
	if tree1 == nil || tree2 == nil {
		return false
	}

	return (tree1.Val == tree2.Val) && isMirrot(tree1.Left, tree2.Right) && isMirrot(tree1.Right, tree2.Left)
}
