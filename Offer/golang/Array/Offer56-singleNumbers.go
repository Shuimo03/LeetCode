package array

func singleNumbers(nums []int) []int {
	x, y, n, m := 0, 0, 0, 1
	for i := 0; i < len(nums); i++ {
		n ^= nums[i]
	}
	for (n & m) == 0 {
		m <<= 1
	}

	for i := 0; i < len(nums); i++ {
		if (nums[i] & m) == 0 {
			x ^= nums[i]
		} else {
			y ^= nums[i]
		}
	}
	return []int{x, y}
}
