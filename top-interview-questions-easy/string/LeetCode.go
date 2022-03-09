package string

import (
	"sort"
	"strings"
)

func sortString(str string) string {
	s := strings.Split(str, "")
	sort.Strings(s)
	return strings.Join(s, "")
}

func isAnagram(s string, t string) bool {
	res1 := sortString(s)
	res2 := sortString(t)
	if res1 == res2 {
		return true
	}
	return false
}
