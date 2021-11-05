package greedy

func max(x, y int) int {
	if x < y {
		return y
	}
	return x
}

func canJump(nums []int) bool {
	if len(nums) == 0 {
		return false
	}
	maxJump := 0
	for i := 0; i < len(nums); i++ {
		if maxJump < i {
			return false
		}
		maxJump = max(i+nums[i], maxJump)
	}
	return true
}
