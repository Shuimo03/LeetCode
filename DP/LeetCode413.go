package dp

func numberOfArithmeticSlices(nums []int) int {
	n := len(nums)
	if n < 3 {
		return 0
	}
	dp := make([]int, n+1)
	dp[0] = 0
	for i := 2; i < n; i++ {
		if nums[i]-nums[i-1] == nums[i-1]-nums[i-2] {
			dp[i] = dp[i-1] + 1
		}
	}
	return accumulate(dp[0], dp[n])
}

func accumulate(begin int, end int) int {
	sum := 0
	for i := begin; i < end; i++ {
		sum += i
	}
	return sum
}
