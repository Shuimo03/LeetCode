package String

func strStr(haystack string, needle string) int {
	if needle == "" {
		return 0
	}
	l, r, n := 0, 0, len(haystack)
	for r < n {
		if r-1+1 == n {
			if haystack[l:r+1] == needle {
				return l
			}
			l++
		}
		r++
	}
	return -1
}
