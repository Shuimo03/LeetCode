package search

func findCircleNum(isConnected [][]int) int {
	n := len(isConnected)
	cnt := 0
	visited := make([]bool, n)
	for i := 0; i < n; i++ {
		if !visited[i] {
			dfs(isConnected, i, visited)
			cnt++
		}
	}
	return cnt
}

func dfs(friends [][]int, i int, visited []bool) {
	visited[i] = true
	for k := 0; k < len(friends); k++ {
		if friends[i][k] == 1 && !visited[k] {
			dfs(friends, k, visited)
		}
	}
}
