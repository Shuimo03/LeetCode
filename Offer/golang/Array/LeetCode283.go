package Array

func moveZeroes(nums []int) {
	fast, slow := 0, 0
	for fast < len(nums) {
		if nums[fast] != 0 {
			temp := nums[fast]
			nums[fast] = nums[slow]
			nums[slow] = temp
			slow++
		}
		fast++
	}
}
