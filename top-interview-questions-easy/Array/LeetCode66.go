package Array

func plusOne(digits []int) []int {
	n := len(digits)
	for i := n - 1; i >= 0; i-- {
		if digits[i] != 9 {
			digits[i]++
			//如果digits的末尾有若干个 9,只需要找出从末尾开始的第一个不为9的元素，然后加一，随后将都是9的元素重置为0.
			for j := i + 1; j < n; j++ {
				digits[j] = 0
			}
			return digits
		}
	}
	digits = make([]int, n+1)
	digits[0] = 1
	return digits
}
