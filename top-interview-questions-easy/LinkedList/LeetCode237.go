package LinkedList

type listNode struct {
	Val  int
	Next *listNode
}

func deleteNode(node *listNode) {
	node.Val = node.Next.Val
	node.Next = node.Next.Next
}
