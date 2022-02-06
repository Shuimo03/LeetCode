package array

func searchRange(nums []int, target int) []int {
	if nums == nil {
		return []int{-1, -1}
	}
	left := leftBinarySerach(nums, target)
	right := rightBinarySerach(nums, target) - 1

	if left == len(nums) || nums[left] != target {
		return []int{-1, -1}
	}
	return []int{left, right}
}

func leftBinarySerach(nums []int, target int) int {
	l, r := 0, len(nums)

	for l < r {
		mid := l + (r-l)/2
		if nums[mid] >= target {
			r = mid
		} else {
			l = mid
		}
	}
	return l
}

func rightBinarySerach(nums []int, target int) int {
	l, r := 0, len(nums)

	for l < r {
		mid := l + (r-l)/2
		if nums[mid] > target {
			r = mid
		} else {
			l = mid
		}
	}
	return l
}
