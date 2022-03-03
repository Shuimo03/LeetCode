package goMarch

import "testing"

func TestAddDigits(test *testing.T) {
	if ans := AddDigits(38); ans != 2 {
		test.Errorf("答案应该是2,因为3+8=11,1+1=2")
	}
}
