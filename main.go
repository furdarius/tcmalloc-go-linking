package main

// extern void cc_main();
import "C"

import (
		"fmt"
)


func main() {
	fmt.Println("Hello World")
	C.cc_main()
}
