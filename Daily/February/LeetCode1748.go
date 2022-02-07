package february

func sumOfUnique(nums []int) int {

	state := map[int]int{}
	ans := 0
	for _, num := range nums {
		if state[num] == 0 {
			ans += num
			state[num] = 1
		} else if state[num] == 1 {
			ans -= num
			state[num] = 2
		}
	}
	return ans
}
