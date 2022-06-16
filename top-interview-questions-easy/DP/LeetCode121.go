package DP

func maxProfit(prices []int) int {
	k := 0
	res := 0
	dp := 0
	for i := 0; i < len(prices); i++ {
		if prices[k] > prices[i] {
			k = i
		}
		res = max(dp, prices[i]-prices[k])
		dp = res
	}
	return res
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
