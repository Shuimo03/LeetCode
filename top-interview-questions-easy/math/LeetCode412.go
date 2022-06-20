package main

import (
	"fmt"
	"strconv"
	"strings"
)

func fizzBuzz(n int) []string {
	res := make([]string, 0)
	for i := 1; i <= n; i++ {
		sb := &strings.Builder{}
		if i%3 == 0 {
			//	res = append(res, "Fizz")
			sb.WriteString("Fizz")
		}
		if i%5 == 0 {
			//	res = append(res, "Buzz")
			sb.WriteString("Buzz")
		}
		if sb.Len() == 0 {
			//	res = append(res, strconv.Itoa(i))
			sb.WriteString(strconv.Itoa(i))
		}
		res = append(res, sb.String())
	}
	return res
}

func main() {
	n := 3
	fmt.Println(fizzBuzz(n))
}
