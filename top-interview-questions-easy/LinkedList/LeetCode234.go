package LinkedList

type ListNode struct {
	Val  int
	Next *ListNode
}

func getListLength(head *ListNode) int {
	if head == nil {
		return 0
	}
	nodeNum := 0
	for head != nil {
		nodeNum++
		head = head.Next
	}
	return nodeNum
}

func isPalindrome(head *ListNode) bool {
	nodeNum := getListLength(head)
	arr := make([]int, 0, 0)
	for i := 0; i < nodeNum; i++ {
		arr = append(arr, head.Val)
		head = head.Next
	}
	n := len(arr)
	for k, v := range arr[:n/2] {
		if v != arr[n-1-k] {
			return false
		}
	}
	return true
}
