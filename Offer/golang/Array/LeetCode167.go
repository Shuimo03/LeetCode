package array

func twoSumLeetCode(numbers []int, target int) []int {
	left, right := 0, len(numbers)-1
	for left < right {
		sum := numbers[left] + numbers[right]
		if target == sum {
			return []int{left + 1, right + 1}
		} else if target < sum {
			right--
		} else {
			left++
		}
	}
	return []int{-1, -1}
}
