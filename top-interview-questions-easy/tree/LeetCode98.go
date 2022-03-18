package tree

import "math"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isValidBST(root *TreeNode) bool {
	return validBST(root, math.MaxInt64, math.MaxInt64)
}

func validBST(root *TreeNode, min_val, max_val int64) bool {
	if root == nil {
		return true
	}
	if root.Val <= int(min_val) || root.Val >= int(max_val) {
		return false
	}
	return validBST(root.Left, min_val, int64(root.Val)) && validBST(root.Right, int64(root.Val), max_val)
}
