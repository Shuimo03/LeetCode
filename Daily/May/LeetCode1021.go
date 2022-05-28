package May

func removeOuterParentheses(s string) string {
	var ans, stack []rune
	for _, c := range s {
		if c == ')' {
			stack = stack[:len(stack)-1]
		}
		if len(stack) > 0 {
			ans = append(ans, c)
		}

		if c == '(' {
			stack = append(stack, c)
		}
	}
	return string(ans)
}
