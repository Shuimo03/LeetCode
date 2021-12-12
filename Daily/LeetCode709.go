package Daily

import "strings"

func toLowerCase(s string) string {
	if s == "" {
		return ""
	}
	res := toLower(s)
	return res
}

func toLower(s string) string {
	buffers := &strings.Builder{}
	buffers.Grow(len(s))
	for i := 0; i < len(s); i++ {
		c := s[i]
		if 'A' <= c && c <= 'Z' {
			c += 'a' - 'A'
		}
		buffers.WriteByte(c)
	}
	return buffers.String()
}
