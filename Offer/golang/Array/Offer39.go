package array

func majorityElement(nums []int) int {
	votes, x := 0, 0
	for _, num := range nums {
		if votes == 0 {
			x = num
		}
		if num == x {
			votes += 1
		} else {
			votes -= 1
		}
	}
	return x
}
