package goMarch

import "testing"

func TestConvertToBase7(test *testing.T) {
	if ans := ConvertToBase7(100); ans != "202" {
		test.Errorf("ans = %d", 202)
	}
}
