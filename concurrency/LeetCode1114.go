/**
三个不同的线程 A、B、C 将会共用一个 Foo 实例。

一个将会调用 first() 方法
一个将会调用 second() 方法
还有一个将会调用 third() 方法
请设计修改程序，以确保 second() 方法在 first() 方法之后被执行，third() 方法在 second() 方法之后被执行。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/print-in-order
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
**/

package main

import (
	"fmt"
	"os"
	"runtime/trace"
	"sync"
	"time"
)

type myLock struct {
	sync.Mutex
}

const LEN = 2 // the total queues to print

var (
	lock   myLock
	status [LEN][2]bool
)

func first(i int) {
	time.Sleep(time.Duration(25) * time.Millisecond)
	status[i] = [2]bool{true, false}
}

func second(i int) {
	for {
		lock.Lock()
		current := status[i]
		lock.Unlock()

		if current == [2]bool{true, false} {
			status[i] = [2]bool{true, true}
			break
		}
	}
}

func third(i int) {
	for {
		lock.Lock()
		current := status[i]
		lock.Unlock()

		if current == [2]bool{true, true} {
			fmt.Printf("%d: one > two > three \n", i)
			break
		}
	}
}

func main() {

	_ = trace.Start(os.Stderr)
	defer trace.Stop()

	for i := 0; i < LEN; i++ {
		go first(i)
		go second(i)
		go third(i)
	}

	time.Sleep(time.Duration(100) * time.Millisecond)
}
