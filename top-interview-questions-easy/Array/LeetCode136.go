package Array

import (
	"sort"
)

func singleNumber(nums []int) int {
	sort.Ints(nums)
	if len(nums) == 1 {
		return nums[0]
	}
	if nums[0] != nums[1] {
		return nums[0]
	}

	if len(nums) >= 2 && nums[len(nums)-2] != nums[len(nums)-1] {
		return nums[len(nums)-1]
	}
	for i := 1; i < len(nums); i++ {
		if nums[i] != nums[i-1] && nums[i] != nums[i+1] {
			return nums[i]
		}
	}
	return 0
}
