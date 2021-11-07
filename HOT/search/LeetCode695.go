package search

var direction = []int{-1, 0, 1, 0, -1}

func maxAreaOfIsland(grid [][]int) int {
	if grid == nil || grid[0] == nil {
		return 0
	}
	max_area := 0
	for i := 0; i < len(grid); i++ {
		for j := 0; j < len(grid[0]); j++ {
			if grid[i][j] == 1 {
				max_area = max(max_area, dfs(grid, i, j))
			}
		}
	}
	return max_area
}

func dfs(grid [][]int, r, c int) int {
	if grid[r][c] == 0 {
		return 0
	}
	grid[r][c] = 0
	x, y, area := 1, 1, 1
	for i := 0; i < 4; i++ {
		x = r + direction[i]
		y = c + direction[i+1]
		if x >= 0 && x < len(grid) && y >= 0 && y < len(grid[0]) {
			area += dfs(grid, x, y)
		}
	}
	return area
}

func max(x, y int) int {
	if x > y {
		return x
	}
	return y
}
