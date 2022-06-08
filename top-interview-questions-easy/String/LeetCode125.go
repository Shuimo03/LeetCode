package main

import (
	"fmt"
	"strings"
)

func isPalindrome(s string) bool {

	l, r := 0, len(s)-1

	if string(s[l]) != string(s[r]) {
		return false
	}

	for l < r {
		if s[l] == s[r] {
			l++
			r--
		} else {
			return false
		}
	}
	return true
}

func rightString(str string) string {
	str = strings.Replace(str, " ", "", -1)
	str = strings.Replace(str, ",", "", -1)
	str = strings.Replace(str, ":", "", -1)
	res := strings.ToLower(str)
	return res
}

func main() {
	str := "A man, a plan, a canal: Panama"
	res := rightString(str)
	fmt.Println(isPalindrome(res))
}
