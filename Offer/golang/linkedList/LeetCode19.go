package linkedList

func getListLength(head *ListNode) int {
	if head == nil {
		return 0
	}
	cnt := 0
	for head != nil {
		cnt++
		head = head.Next
	}
	return cnt
}

func removeNthFromEnd(head *ListNode, n int) *ListNode {
	dummy := &ListNode{0, head}
	listLength := getListLength(head)
	curr := dummy
	for i := 0; i < listLength-n; i++ {
		curr = curr.Next
	}
	curr.Next = curr.Next.Next
	return dummy.Next
}

func removeNthFromEndDoublePoint(head *ListNode, n int) *ListNode {
	dummy := &ListNode{-1, head}
	x := findFromEnd(head, n+1)
	x.Next = x.Next.Next
	return dummy.Next
}

func findFromEnd(head *ListNode, n int) *ListNode {
	if head == nil {
		return nil
	}

	p1, p2 := head, head

	//p1先走n步
	for i := 0; i < n; i++ {
		p1 = p1.Next
	}

	//接着两个指针同时走
	for p1 != nil {
		p1 = p1.Next
		p2 = p2.Next
	}
	return p2
}
