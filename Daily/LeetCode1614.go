package daily

func maxDepth(s string) int {
	ans, size := 0, 0
	for i := 0; i < len(s); i++ {
		if s[i] == '(' {
			size++
			ans = max(ans, size)
		} else if s[i] == ')' {
			size--
		}
	}
	return ans
}

func max(x, y int) int {
	if x > y {
		return x
	}
	return y
}
