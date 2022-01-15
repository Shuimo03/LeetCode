package main

import (
	"fmt"
	"math"
)

/**
知识点:贪心/二分/LIS
*/

//61/76

// func increasingTriplet(nums []int) bool {

// 	l, r := 0, 1
// 	cnt, skip := 1, 0
// 	for i := 0; i < len(nums)-1; i++ {
// 		if nums[l] > nums[r] {
// 			cnt++
// 		} else {
// 			skip++
// 		}
// 		l++
// 		r++
// 	}
// 	if cnt == 3 {
// 		return true
// 	} else {
// 		return false
// 	}
// }

func increasingTriplet(nums []int) bool {
	n := len(nums)
	f := []int{math.MaxInt32, math.MaxInt32, math.MaxInt32, math.MaxInt32}
	for i := 0; i < n; i++ {
		t := nums[i]
		if f[2] < t {
			return true
		} else if f[1] < t && t < f[2] {
			f[2] = t
		} else if f[1] > t {
			f[1] = t
		}
	}
	return false
}

func main() {
	nums := []int{2, 1, 5, 0, 4, 6}
	fmt.Println(increasingTriplet(nums))
}
