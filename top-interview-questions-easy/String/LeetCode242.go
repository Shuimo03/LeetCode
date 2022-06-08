package String

import (
	"sort"
)

func isAnagram(s string, t string) bool {
	slen, tlen := len(s), len(t)
	if slen != tlen {
		return false
	}

	orderS := make([]string, len(s), len(s))
	orderT := make([]string, len(t), len(t))
	for i := 0; i < len(s); i++ {
		orderS[i] = string(s[i])
	}

	sort.Float64s()

	for i := 0; i < len(t); i++ {
		orderT[i] = string(t[i])
	}

	sort.Strings(orderS)
	sort.Strings(orderT)

	for l, r := 0, 0; l < len(orderS); l++ {
		if orderS[l] == orderT[r] {
			r++
		} else {
			return false
		}
	}
	return true
}
