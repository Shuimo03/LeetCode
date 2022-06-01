package String

func reverse(x int) int {
	res := 0
	for x != 0 {
		//每次取末尾数字
		temp := x % 10
		//判断是否大于 最大32位整数
		if res > 214748364 || (res == 214748364 && temp > 7) {
			return 0
		}
		//判断是否小于 最小32位整数
		if res < -214748364 || (res == -214748364 && temp < -8) {
			return 0
		}
		res = res*10 + temp
		x /= 10
	}
	return res
}
