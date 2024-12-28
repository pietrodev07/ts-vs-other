package main

import (
	"fmt"
	"time"
)

func main() {
	iterations := 100000000
	start := time.Now()

	for i := 0; i < iterations; i++ {
		factorial(20)
	}

	duration := time.Since(start)

	fmt.Printf("[GO] Execution time: %.2f ms\n", float64(duration.Milliseconds()))
}

func factorial(n int) int {
	if n > 0 {
		return n * factorial(n-1)
	}

	return 1
}
