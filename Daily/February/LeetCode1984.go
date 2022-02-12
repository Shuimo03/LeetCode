package february

import (
	"math"
	"sort"
)

func minimumDifference(nums []int, k int) int {
	if len(nums) == 1 {
		return nums[0] - nums[0]
	}
	sort.Ints(nums)
	ans := math.MaxInt

	for i := 0; i+k-1 < len(nums); i++ {
		ans = min(ans, nums[i+k-1]-nums[i])
	}
	return ans
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
