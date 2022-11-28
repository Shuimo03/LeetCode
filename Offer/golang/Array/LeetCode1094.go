package array

func carPooling(trips [][]int, capacity int) bool {
	diff := []int{}

	for i := 0; i < 1001; i++ {
		diff = append(diff, 0)
	}

	for _, trip := range trips {
		diff[trip[1]] += trip[0]
		diff[trip[2]] -= trip[0]
	}

	preSum := 0
	for i := 0; i < 1001; i++ {
		preSum += diff[i]
		if preSum > capacity {
			return false
		}
	}
	return true
}
