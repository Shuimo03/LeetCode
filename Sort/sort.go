package main

import "fmt"

func quick_sort(nums []int, l, r int) {
	if l+1 >= r {
		return
	}
	first, last := l, r-1
	key := nums[first]
	for first < last {
		for first < last && nums[last] >= key {
			last--
		}
		nums[first] = nums[last]

		for first < last && nums[first] <= key {
			first++
		}
		nums[last] = nums[first]
	}
	nums[first] = key
	quick_sort(nums, l, first)
	quick_sort(nums, first+1, r)
}

func main() {
	nums := []int{9, 8, 7, 6, 5, 3, 2, 1}
	quick_sort(nums, 0, len(nums))
	for i := 0; i < len(nums); i++ {
		fmt.Println(nums[i])
	}
}
