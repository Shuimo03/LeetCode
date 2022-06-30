package main

func main() {
	readOnly := make(<-chan int)
	for i := 0; i < 10; i++ {
		<-readOnly
	}
	writeOnly := make(chan<- int)

	for i := 0; i < 10; i++ {
		writeOnly <- i
	}
}
