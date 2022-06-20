package math

func countPrimes(n int) int {
	if n < 2 {
		return 0
	}

	isPrime := make([]bool, n)
	cnt := 0
	for i := range isPrime {
		isPrime[i] = true
	}
	for i := 2; i < n; i++ {
		if isPrime[i] {
			cnt++
		}
		for j := 2 * i; j < n; j += i {
			isPrime[j] = false
		}
	}
	return cnt
}
