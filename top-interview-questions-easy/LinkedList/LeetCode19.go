package LinkedList

type ListNode struct {
	Val  int
	Next *listNode
}

func getListLength(head *ListNode) int {
	nodeNum := 0
	for head != nil {
		nodeNum++
		head = (*ListNode)(head.Next)
	}
	return nodeNum
}

func removeNthFromEnd(head *ListNode, n int) *ListNode {

	listLength := getListLength(head) // 获取链表长度
	dummy := &ListNode{0, head}       //哑节点，通过哑节点处理当前头节点特殊情况
	curr := dummy
	for i := 0; i < listLength-n+1; i++ {
		curr = curr.Next
	}
	curr.Next = curr.Next.Next
	return dummy.Next
}
