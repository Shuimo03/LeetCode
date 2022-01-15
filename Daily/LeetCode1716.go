package daily

/** 等差数列求和
	第一周:1-7
	第二周:2-8
	第三周:3-9
	.....
**/
func totalMoney(n int) int {
	ans := 0
	first := (1 + 7) * 7 / 2
	week := n / 7
	last := first + (week-1)*7
	ans += (first + last) * week / 2

	day1 := n/7 + 1
	for i := 1; i <= (n - week*7); i++ {
		ans += day1 - 1 + i
	}

	return ans
}
