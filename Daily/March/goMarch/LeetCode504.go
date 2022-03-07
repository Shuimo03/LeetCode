package goMarch

func ConvertToBase7(num int) string {
	if num == 0 {
		return "0"
	}

	isNegative := num < 0
	if isNegative {
		num = -num
	}

	res := []byte{}

	for num > 0 {
		res = append(res, '0'+byte(num%7))
		num /= 7
	}
	if isNegative {
		res = append(res, '-')
	}

	for i, n := 0, len(res); i < n/2; i++ {
		res[i], res[n-1-i] = res[n-1-i], res[i]
	}
	return string(res)
}
