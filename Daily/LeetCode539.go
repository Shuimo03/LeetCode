package daily

import (
	"math"
	"sort"
)

// 排序
func findMinDifference(timePoints []string) int {
	if timePoints == nil {
		return 0
	}
	sort.Strings(timePoints)
	ans := math.MaxInt32
	t0Minutes := getMinutes(timePoints[0])
	preMinutes := t0Minutes
	for _, i := range timePoints[1:] {
		minutes := getMinutes(i)
		ans = min(ans, minutes-preMinutes)
		preMinutes = minutes
	}
	ans = min(ans, t0Minutes+1440-preMinutes)
	return ans
}

func getMinutes(t string) int {
	return (int(t[0]-'0')*10+int(t[1]-'0'))*60 + int(t[3]-'0')*10 + int(t[4]-'0')
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
