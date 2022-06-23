package main

func pivotIndex(nums []int) int {

	total, cnt := 0, 0
	for i := 0; i < len(nums); i++ {
		total += nums[i]
	}

	for i, v := range nums {
		if 2*cnt+v == total {
			return i
		}
		cnt += v
	}
	return -1
}
