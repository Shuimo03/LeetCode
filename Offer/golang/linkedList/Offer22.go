package linkedList

func getKthFromEnd(head *ListNode, k int) *ListNode {
	fast, slow := head, head
	for i := 0; i < k; i++ {
		if fast == nil {
			return nil
		}
		fast = fast.Next
	}
	for fast != nil {
		slow = slow.Next
		fast = fast.Next
	}
	return slow
}
