package string

import "strings"

func reverseWords(s string) (res string) {
	if s == "" {
		return ""
	}

	//去除多余的空格
	s = strings.TrimSpace(s)
	//从后向前遍历
	l, r := len(s)-1, len(s)-1
	for l >= 0 {
		for l >= 0 && s[l] != ' ' {
			l--
		}
		res += s[l+1:r+1] + " "
		for l >= 0 && s[l] == ' ' {
			l--
		}
		r = l
	}
	return res[:len(res)-1]
}
