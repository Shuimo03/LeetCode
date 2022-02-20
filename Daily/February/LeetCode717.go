package february

func isOneBitCharacter(bits []int) bool {
	n, index := len(bits), 0
	for index < n-1 {
		if bits[index] == 0 {
			index++
		} else {
			index += 2
		}
	}
	return index == n-1
}
