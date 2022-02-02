package golang

/**
这一题使用二维DP的方式去做
*/

func longestCommonSubsequence(text1 string, text2 string) int {

	m, n := len(text1), len(text2)
	dpTable := make([][]int, m+1)
	for i := range dpTable {
		dpTable[i] = make([]int, n+1)
	}
	for i, t1 := range text1 {
		for j, t2 := range text2 {
			if t1 == t2 {
				dpTable[i+1][j+1] = dpTable[i][j] + 1
			} else {
				dpTable[i+1][j+1] = max(dpTable[i][j+1], dpTable[i+1][j])
			}
		}
	}
	return dpTable[m][n]
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {

	nums1 := []
	res := longestCommonSubsequenceInt()
}
