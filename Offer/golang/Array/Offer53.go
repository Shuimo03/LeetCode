package Array

func missingNumber(nums []int) int {
	res := make([]int, 0, len(nums))
	index := nums[len(nums)-1]
	for i := 0; i < index; i++ {
		res = append(res, nums[i])
	}
	for i := 0; i <
}
