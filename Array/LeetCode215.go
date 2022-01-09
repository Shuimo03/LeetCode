package array

import "sort"

// 知识点: 快速排序或者堆排序

func findKthLargest(nums []int, k int) int {
	sort.Ints(nums)
	res := len(nums) - k
	return nums[res]
}
