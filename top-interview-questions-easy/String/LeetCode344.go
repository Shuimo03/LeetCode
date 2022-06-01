package String

func reverseString(s []byte) {
	if len(s) == 0 {
		return
	}

	l, r := 0, len(s)-1
	for ; l < r; l++ {
		swap(&s[l], &s[r])
		r--
	}
}

func swap(l, r *byte) {
	*l, *r = *r, *l
}
