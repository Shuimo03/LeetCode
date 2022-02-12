package february

func countKDifference(nums []int, k int) int {
	cnt := 0
	for i := 0; i < len(nums); i++ {
		for j := i + 1; j < len(nums); j++ {
			if abs(nums[i]-nums[j]) == k {
				cnt++
			}
		}
	}
	return cnt
}

func abs(n int) int {
	if n < 0 {
		return -n
	}
	return n
}
