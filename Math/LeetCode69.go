package math

func mySqrt(x int) int {
	if x == 0 {
		return x
	}
	l, r := 1, x

	for l <= r {
		mid := l + (r-l)/2
		sqrt := x / mid
		if sqrt == mid {
			return mid
		} else if mid > sqrt {
			r = mid - 1
		} else {
			l = mid + 1
		}
	}
	return r
}
