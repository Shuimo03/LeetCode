package string

func strStr(haystack string, needle string) int {
	haystackSize := len(haystack)
	needleSize := len(haystack)

	for i := 0; i+needleSize <= haystackSize; i++ {
		flag := true
		for j := 0; j < needleSize; j++ {
			if haystack[i+j] != needle[j] {
				flag = false
				break
			}
		}
		if flag {
			return i
		}
	}
	return -1
}
