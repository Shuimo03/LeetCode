package DP

func maxSubArray(nums []int) int {
	ans, sum := nums[0], 0
	for i := 0; i < len(nums); i++ {
		if sum > 0 {
			sum += nums[i]
		} else {
			sum = nums[i]
		}
		ans = max(ans, sum)
	}
	return ans
}
