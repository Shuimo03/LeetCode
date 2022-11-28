package array

func GetModifiedArray(length int, updates [][]int) []int {
	diff := make([]int, 0)
	for _, update := range updates {
		startIndex, endIndex, inc := update[0], update[1], update[2]
		diff[startIndex] += inc
		if endIndex < length-1 {
			diff[endIndex+1] -= inc
		}
	}

	for i := 1; i < length; i++ {
		diff[i] = diff[i-1] + diff[i]
	}
	return diff
}
