package May

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func inorderSuccessor(root *TreeNode, p *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}
	res := inorderSuccessor(root.Left, p)
	if res != nil {
		return res
	}
	if root.Val > p.Val {
		return root
	}
	return inorderSuccessor(root.Right, p)
}
