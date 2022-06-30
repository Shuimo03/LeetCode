package other

func hammingWeight(num uint32) int {
	cnt := 0
	for i := 0; i < 32; i++ {
		if 1<<i&num > 0 {
			cnt++
		}
	}
	return cnt
}
