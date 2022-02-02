package main

func candy(ratings []int) int {

	size := len(ratings)
	res := 0
	if size < 2 {
		return size
	}
	num := make([]int, size)

	// 初始化，每个人至少有一颗糖果
	for i := 0; i < len(ratings); i++ {
		num[i] = 1
	}

	// 从左到右开始,当右边的大于左边的就加一
	for i := 1; i < size; i++ {
		if ratings[i] > ratings[i-1] {
			num[i] = num[i-1] + 1
		}
	}
	// 再从右到左，当左边的大于右边的就右边加1，但要花费糖果最少，所以需要做下判断
	for i := size - 1; i > 0; i-- {
		if ratings[i] < ratings[i-1] {
			num[i-1] = max(num[i-1], num[i]+1)
		}
	}

	// 计算总糖果量
	for i := 0; i < size; i++ {
		res += num[i]
	}
	return res
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
