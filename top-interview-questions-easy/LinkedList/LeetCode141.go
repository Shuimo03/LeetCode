package LinkedList

type ListNode struct {
	Val  int
	Next *ListNode
}

// Floyd判圈算法
func hasCycle(head *ListNode) bool {

	if head == nil || head.Next == nil {
		return false
	}
	slow, fast := head, head.Next
	for fast != slow {
		if fast == nil || fast.Next == nil {
			return false
		}
		slow = slow.Next
		fast = fast.Next.Next
	}
	return true
}
