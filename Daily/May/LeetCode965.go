package May

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isUnivalTree(root *TreeNode) bool {
	return inorderTraversal(root, root.Val)
}

func inorderTraversal(root *TreeNode, value int) bool {
	if root == nil {
		return true
	}
	if root.Val != value {
		return false
	} else {
		return inorderTraversal(root.Left, value) && inorderTraversal(root.Right, value)
	}
}
