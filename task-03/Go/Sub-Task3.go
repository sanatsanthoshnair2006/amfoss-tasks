package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	// Create a reader to read input from the user
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter the number of rows for the diamond (n): ")

	// Read the input as a string
	input, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println("Error reading input:", err)
		return
	}

	// Trim any whitespace and convert to integer
	input = strings.TrimSpace(input)
	n, err := strconv.Atoi(input)
	if err != nil || n <= 0 {
		fmt.Println("Please enter a valid positive integer.")
		return
	}

	// Generate the upper half of the diamond
	for i := 1; i <= n; i++ {
		// Print spaces
		for j := i; j < n; j++ {
			fmt.Print(" ")
		}
		// Print asterisks
		for k := 1; k <= (2*i-1); k++ {
			fmt.Print("*")
		}
		// Move to the next line
		fmt.Println()
	}

	// Generate the lower half of the diamond
	for i := n - 1; i >= 1; i-- {
		// Print spaces
		for j := n; j > i; j-- {
			fmt.Print(" ")
		}
		// Print asterisks
		for k := 1; k <= (2*i-1); k++ {
			fmt.Print("*")
		}
		// Move to the next line
		fmt.Println()
	}
}
