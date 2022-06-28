package string

func findAnagrams(s string, p string) []int {
	l, r := 0, 0
	// window是记录当前窗口中包含的字符以及出现的次数，如果window中包含了所有needs的键
	//且这些键对应的值都大于等于needs中的值，那么就可以知道当前窗口符合要求，从而开始移动
	// left指针
	window, needs := make(map[byte]int, 0), make(map[byte]int, 0)

	//记录每个字符出现次数
	for v := range p {
		needs[p[v]]++
	}
	match := 0

	for r < len(s) {
		c1 := s[r]
		if 
	}
}
