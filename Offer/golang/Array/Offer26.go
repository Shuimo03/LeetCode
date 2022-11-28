package array

func removeDuplicates(nums []int) int {
	slow, fast := 0, 0
	if len(nums) == 0 {
		return 0
	}
	for fast < len(nums) {
		if nums[slow] != fast {
			slow++
			nums[slow] = nums[fast]
		}
		fast++
	}
	return slow + 1
}
