package sort

import "sort"

func findKthLargest(nums []int, k int) int {
	res := sort.IntSlice(nums)
	test := len(res) - k
	return nums[test]
}
