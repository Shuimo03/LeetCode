package main

func twoSum(nums []int, target int) []int {
	if len(nums) == 0 {
		return nums
	}
	for i := 0; i < len(nums); i++ {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] == target {
				return []int{i, j}
			}
		}
	}
	return nil
}

func hashTwoSum(nums []int, target int) []int {
	hashMap := make(map[int]int)

	for i, num := range nums {
		complement := target - num
		if index, exist := hashMap[complement]; exist {
			return []int{index, i}
		}
		hashMap[num] = i
	}
	return nil
}

func main() {

}
