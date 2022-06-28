package string

func lengthOfLongestSubstring(s string) int {
	l, r, res := 0, 0, 0
	cnt := make(map[byte]int, len(s))
	for r < len(s) {
		c1 := s[r]
		cnt[c1]++
		r++
		//如果cnt中出现重复字符
		//开始移动l来缩小窗口
		for cnt[c1] > 1 {
			c2 := s[l]
			cnt[c2]--
			l++
		}
		res = max(res, r-l)
	}
	return res
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
