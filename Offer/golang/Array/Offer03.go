package array

func findRepeatNumber(nums []int) int {
	i := 0
	for i < len(nums) {
		if nums[i] == i {
			i++
			continue
		}
		if nums[nums[i]] == nums[i] {
			return nums[i]
		}
		temp := nums[i]
		nums[i] = nums[temp]
		nums[temp] = temp
	}
	return -1
}
