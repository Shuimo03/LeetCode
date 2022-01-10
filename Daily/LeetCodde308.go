package daily

import "strconv"

func helper(first, second, idx, l int, a string) bool {
	if idx == l {
		return true
	}
	next := strconv.Itoa(first + second)

	if idx+len(next) > l {
		return false
	}
	num := 0
	for i := 0; i < len(next); i++ {
		if a[idx+i] != next[i] {
			return false
		}
		num = num*10 + int(a[idx+i]-'0')
	}

	first, second = second, num
	return helper(first, second, idx+len(next), l, a)
}

func isAdditiveNumber(a string) bool {
	l := len(a)
	for i := 1; i < l-1; i++ {
		if i > 1 && a[0] == '0' {
			continue
		}
		first, _ := strconv.Atoi(a[:i])
		for j := i + 1; j < l; j++ {
			if j > i+1 && a[i] == '0' {
				continue
			}

			second, _ := strconv.Atoi(a[i:j])
			if helper(first, second, j, l, a) {
				return true
			}
		}
	}

	return false
}
