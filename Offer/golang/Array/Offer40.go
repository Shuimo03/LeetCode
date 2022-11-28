package array

import "sort"

func getLeastNumbers(arr []int, k int) []int {
	sort.Ints(arr)
	res := make([]int, 0)
	for i := 0; i < k; i++ {
		res = append(res, arr[i])
	}
	return res
}
