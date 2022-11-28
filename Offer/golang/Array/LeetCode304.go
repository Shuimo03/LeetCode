package array

type NumMatrix struct {
	preSum [][]int
}

func ConstructorMatrix(matrix [][]int) NumMatrix {
	m, n := len(matrix), len(matrix[0])
	if m == 0 || n == 0 {
		return NumMatrix{}
	}
	sums := make([][]int, m+1)
	sums[0] = make([]int, n+1)
	for i, row := range matrix {
		sums[i+1] = make([]int, n+1)
		for j, v := range row {
			sums[i+1][j+1] = sums[i+1][j] + sums[i][j+1] - sums[i][j] + v
		}
	}
	return NumMatrix{preSum: sums}
}

func (nm *NumMatrix) SumRegion(row1 int, col1 int, row2 int, col2 int) int {
	return nm.preSum[row2+1][col2+1] - nm.preSum[row1][col2+1] - nm.preSum[row2+1][col1] + nm.preSum[row1][col1]
}
