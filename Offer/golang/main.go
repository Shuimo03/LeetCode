package main

import "fmt"

func main() {

	arrays := [][]int{{1, 2, 3, 4}, {5, 6, 7, 8}}
	//diff := make([]int, 0)
	for _, array := range arrays {
		fmt.Println(array[])
	}
}
