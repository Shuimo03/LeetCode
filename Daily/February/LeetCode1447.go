package february

import "strconv"

func simplifiedFractions(n int) []string {
	ans := make([]string, 0)
	for denominator := 2; denominator <= n; denominator++ {
		for numerator := 1; numerator < denominator; numerator++ {
			if gcd(numerator, denominator) == 1 {
				ans = append(ans, strconv.Itoa(numerator)+"/"+strconv.Itoa(denominator))
			}
		}
	}
	return ans
}

func gcd(m, n int) int {
	for n != 0 {
		t := m % n
		m = n
		n = t
	}
	return m
}
