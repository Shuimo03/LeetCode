package daily

/**
利用格雷编码的定义,对于要编码的数字i,它的格雷编码是异或它本身的右移一位结果。
对于要输入n，首先要确定需要的各类编码数据量，这个数据量是2的n次方决定的。
所以1左移n位耶确定了需要多少个格雷码。最后就是编码部分，对于每个要编码的数据执行规则
然后放到结果中就可以了。
参考链接:https://leetcode-cn.com/problems/gray-code/solution/wei-yun-suan-cge-lei-bian-ma-by-sugar_27-578r/
*/
func grayCode(n int) []int {
	sum := 1 << n
	ans := make([]int, n)
	for i := 0; i < sum; i++ {
		ans[i] = i>>1 ^ i
	}
	return ans
}
