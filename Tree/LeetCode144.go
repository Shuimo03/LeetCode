package Tree

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func preorderTraversal(root *TreeNode) (res []int) {

	var perorder func(*TreeNode)
	perorder = func(node *TreeNode) {
		if node == nil {
			return
		}
		res = append(res, root.Val)
		perorder(node.Left)
		perorder(node.Right)
	}
	perorder(root)
	return res
}
