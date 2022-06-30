package array

import "math"

func containsNearbyAlmostDuplicate(nums []int, k int, t int) bool {
	l, r := 0, 0
	for i := 0; i < len(nums); i++ {
		if nums[l] == nums[r] && absSub(nums[l], nums[r]) <= t && absSub(l, r) <= k {
			return true
		}
		r++
	}
	return false
}

func absSub(a, b int) int {
	res := math.Abs(float64(a)) - math.Abs(float64(b))
	return int(res)
}
