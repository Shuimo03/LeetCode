package linkedList

func partition(head *ListNode, x int) *ListNode {
	dummy1 := &ListNode{}
	dummy2 := &ListNode{}
	list1, list2 := dummy1, dummy2
	linkedList := head
	for linkedList != nil {
		if linkedList.Val >= x {
			list2.Next = linkedList
			list2 = list2.Next
		} else {
			list1.Next = linkedList
			list1 = list1.Next
		}
		temp := linkedList.Next
		linkedList.Next = nil
		linkedList = temp
	}
	list1.Next = dummy2.Next
	return dummy1.Next
}
