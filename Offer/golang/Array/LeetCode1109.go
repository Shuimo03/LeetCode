package array

func corpFlightBookings(bookings [][]int, n int) []int {
	nums := make([]int, n)
	for _, booking := range bookings {
		//差分: 计算第一段位置的座位和最后一段座位，中间暂时不管
		nums[booking[0]-1] += booking[2]
		if booking[1] < n {
			nums[booking[1]] -= booking[2]
		}
	}

	for i := 1; i < n; i++ {
		nums[i] = nums[i-1] + nums[i]
	}
	return nums
}
