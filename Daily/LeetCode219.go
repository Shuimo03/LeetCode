package main

import (
	"fmt"
	"math"
)

// func containsNearbyDuplicate(nums []int, k int) bool {

// 	l, r := 0, 1
// 	for i := 0; i < len(nums)-1; i++ {
// 		if nums[l] == nums[r] {
// 			res := int(math.Abs(float64(l)) - math.Abs(float64(r)))
// 			if res <= k {
// 				return true
// 			}
// 		} else if nums[l] != nums[r] {
// 			l++
// 			r++
// 		}
// 	}
// 	return false
// }

func containsNearbyDuplicate(nums []int, k int) bool {
	cache := map[int]int{}
	for i := 0; i < len(nums); i++ {
		if val, ok := cache[nums[i]]; ok && int(math.Abs(float64(val-i))) <= k {
			return true
		}
		cache[nums[i]] = i
	}
	return false
}

func main() {
	arr := []int{1, 2, 3, 1}
	res := containsNearbyDuplicate(arr, 3)
	fmt.Println(res)
}
