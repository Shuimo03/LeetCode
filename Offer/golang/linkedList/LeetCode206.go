package linkedList

func reverseListLeetCode(head *ListNode) *ListNode {
	if head == nil {
		return head
	}
	cur := head
	var pre *ListNode
	for cur != nil {
		temp := cur.Next
		cur.Next = pre
		pre = cur
		cur = temp
	}
	return pre
}
