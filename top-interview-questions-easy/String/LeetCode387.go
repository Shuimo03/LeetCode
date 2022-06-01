package String

func firstUniqChar(s string) int {
	if len(s) == 0 {
		return -1
	}
	cnt := make(map[string]int, len(s))

	//统计每个字母出现的次数
	for _, v := range s {
		cnt[string(v)]++
	}
	for k, v := range s {
		if cnt[string(v)] == 1 {
			return k
		}
	}
	return -1
}
