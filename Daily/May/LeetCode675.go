package May

import "sort"

var dir4 = []struct{ x, y int }{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}

type pair struct {
	dis, x, y int
}

func cutOffTree(forest [][]int) (ans int) {

	trees := []pair{}
	for i, row := range forest {
		for j, high := range row {
			if high > 1 {
				trees = append(trees, pair{high, i, j})
			}
		}
	}
	sort.Slice(trees, func(i, j int) bool {
		return trees[i].dis < trees[j].dis
	})

	perX, perY := 0, 0 //当前节点
	for _, tree := range trees {
		res := bfs(perX, perY, tree.x, tree.y, forest)
		if res < 0 {
			return -1
		}
		ans += res
		perX, perY = tree.x, tree.y
	}
	return ans
}

func bfs(sx, sy, tx, ty int, forest [][]int) int {
	m, n := len(forest), len(forest[0])
	vis := make([][]bool, m)
	for i := range vis {
		vis[i] = make([]bool, n)
	}
	vis[sx][sy] = true
	queue := []pair{{0, sx, sy}}
	for len(queue) > 0 {
		p := queue[0]
		queue = queue[1:]
		if p.x == tx && p.y == ty {
			return p.dis
		}

		for _, dir := range dir4 {
			if x, y := p.x+dir.x, p.y+dir.y; 0 <= x && x < m && 0 <= y && y < n && !vis[x][y] && forest[x][y] > 0 {
				vis[x][y] = true
				queue = append(queue, pair{p.dis + 1, x, y})
			}
		}
	}
	return -1
}
