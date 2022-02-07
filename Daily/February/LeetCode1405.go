package february

import "sort"

func longestDiverseString(a int, b int, c int) string {
	ans := []byte{}
	cnt := []struct {
		c  int
		ch byte
	}{{a, 'a'}, {b, 'b'}, {c, 'c'}}

	for {
		sort.Slice(cnt, func(i, j int) bool { return cnt[i].c > cnt[j].c })
		hashNext := false
		for i, p := range cnt {
			if p.c <= 0 {
				break
			}
			m := len(ans)
			if m >= 2 && ans[m-2] == p.ch && ans[m-1] == p.ch {
				continue
			}
			hashNext = true
			ans = append(ans, p.ch)
			cnt[i].c--
			break
		}
		if !hashNext {
			return string(ans)
		}
	}
}
