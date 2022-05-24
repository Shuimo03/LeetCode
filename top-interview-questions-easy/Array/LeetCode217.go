package Array

import "sort"

func containsDuplicate(nums []int) bool {
	if len(nums) == 0 {
		return false
	}
	res := false
	set := make(map[int]int, len(nums))
	for _, v := range nums {
		set[v]++
		if set[v] > 1 {
			res = true
		}
	}
	return res
}

func sortContainsDuplicate(nums []int) bool {

	sort.Ints(nums)
	for i := 0; i < len(nums); i++ {
		if nums[i] == nums[i+1] {
			return true
		}
	}
	return false
}
