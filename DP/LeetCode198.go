package dp

func rob(nums []int) int {
	if nums == nil {
		return 0
	}

	n := len(nums)
	dp := make([]int, n+1)
	dp[1] = nums[0]
	for i := 2; i <= n; i++ {
		dp[i] = max(dp[i-1], nums[i-1]+dp[i-2])
	}
	return dp[n]
}

func max(x, y int) int {
	if x > y {
		return x
	}
	return y
}
