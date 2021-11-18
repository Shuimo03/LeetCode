package array

func searchRange(nums []int, target int) []int {
	if nums == nil {
		return []int{-1, -1}
	}
	lower := lower_search(nums, target)
	upper := upper_search(nums, target) - 1

	if lower == len(nums) || nums[lower] != target {
		return []int{-1, -1}
	}
	return []int{lower, upper}

}

func lower_search(nums []int, target int) int {
	l, r := 0, len(nums)
	for l < r {
		mid := l + (r-l)/2
		if nums[mid] >= target {
			r = mid
		} else {
			l = mid + 1
		}
	}
	return l
}

func upper_search(nums []int, target int) int {
	l, r := 0, len(nums)
	for l < r {
		mid := l + (r-l)/2
		if nums[mid] > target {
			r = mid
		} else {
			l = mid + 1
		}
	}
	return l
}
