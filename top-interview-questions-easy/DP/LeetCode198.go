package main

import "fmt"

// 方法1 将奇数位和偶数位上的数相加，最后两者比较大小，最终结果就是最大的值。
func rob(nums []int) int {
	if len(nums) == 0 {
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

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
func main() {
	nums := []int{2, 1, 1, 2}
	res := rob(nums)
	fmt.Println(res)
}
