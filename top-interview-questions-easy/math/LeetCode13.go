package math

func romanToInt(s string) int {
	symbols := map[byte]int{'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
	n := len(s)
	ans := 0
	for i := range s {
		val := symbols[s[i]]
		if i < n-1 && val < symbols[s[i+1]] {
			ans -= val
		} else {
			ans += val
		}
	}
	return ans
}
