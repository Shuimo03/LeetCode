package greedy

import "sort"

func findContentChildren(g []int, s []int) int {
	sort.Ints(g)
	sort.Ints(s)
	children, cookies := 0, 0
	for children < len(g) && cookies < len(s) {
		if s[children] <= g[cookies] {
			children++
		}
		cookies++
	}
	return children
}
