package tree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func maxDepth(root *TreeNode) int {
	left := maxDepth(root.Left) + 1
	right := maxDepth(root.Right) + 1
	res := max(left, right)
	return res
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
