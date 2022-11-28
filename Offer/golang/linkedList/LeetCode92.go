package linkedList

func reverseBetween(head *ListNode, left int, right int) *ListNode {
	if left == 1 {
		return reverseLinkedList(head, right)
	}
	head.Next = reverseBetween(head.Next, left-1, right-1)
	return head
}

func reverseLinkedList(head *ListNode, n int) *ListNode {
	var next *ListNode
	if n == 1 {
		next = head.Next
		return head
	}
	last := reverseLinkedList(head.Next, n-1)
	head.Next.Next = head
	head.Next = next
	return last
}
