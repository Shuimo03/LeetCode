package array

func containsNearbyDuplicate(nums []int, k int) bool {
	set := make(map[int]bool)
	for i := 0; i < len(nums); i++ {
		if i > k {
			set[nums[i-k-1]] = false
		}
		if set[nums[i]] {
			return true
		}
		set[nums[i]] = true
	}
	return false
}
