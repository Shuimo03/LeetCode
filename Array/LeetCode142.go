package array

type ListNode struct {
	Val  int
	Next *ListNode
}

func detectCycle(head *ListNode) *ListNode {
	slow, fast := head, head
	for ok := true; ok; ok = (slow != fast) {
		if fast == nil || fast.Next == nil {
			return nil
		}
		fast = fast.Next.Next
		slow = slow.Next
	}
	fast = head
	for fast != slow {
		slow = slow.Next
		fast = fast.Next
	}
	return fast
}
