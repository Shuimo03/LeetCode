package february

var dirs = [][]int{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}
var m, n = 0, 0
var visited = make([][]bool, 0)

func numEnclaves(grid [][]int) int {
	m = len(grid)
	n = len(grid[0])
	visited = make([][]bool, 0, m)

	for i := range visited {
		visited[i] = make([]bool, n)
	}

	for i := 0; i < m; i++ {
		dfs(grid, i, 0)
		dfs(grid, i, n-1)
	}

	for j := 1; j < n-1; j++ {
		dfs(grid, 0, j)
		dfs(grid, m-1, j)
	}

	enclaves := 0
	for i := 1; i < m-1; i++ {
		for j := 1; j < n-1; j++ {
			if grid[i][j] == 1 && !visited[i][j] {
				enclaves++
			}
		}
	}
	return enclaves
}

func dfs(grid [][]int, row, col int) {
	if row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == 0 || visited[row][col] {
		return
	}

	visited[row][col] = true
	for _, dir := range dirs {
		dfs(grid, row+dir[0], col+dir[1])
	}
}
