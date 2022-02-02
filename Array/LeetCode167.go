package array

func twoSum(numbers []int, target int) []int {
	if len(numbers) == 0 {
		return nil
	}

	l, r := 0, len(numbers)-1
	for i := 0; i < len(numbers); i++ {
		if numbers[l]+numbers[r] == target {
			break
		} else if numbers[l]+numbers[r] < target {
			l++
		} else {
			r--
		}
	}
	return []int{l + 1, r + 1}
}
