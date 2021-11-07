package sort

import "sort"

func findKthLargest(nums []int, k int) int {
	sort.Ints(nums)
	pos := len(nums)
	return nums[pos-k]
}
