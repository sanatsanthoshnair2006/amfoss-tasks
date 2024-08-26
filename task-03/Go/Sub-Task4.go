package main

import (
    "io/ioutil"
    "log"
    "strconv"
    "strings"
)

func main() {
    // Read the contents of input.txt
    input, err := ioutil.ReadFile("input.txt")
    if err != nil {
        log.Fatal(err)
    }

    // Convert the contents to an integer (n)
    n, err := strconv.Atoi(strings.TrimSpace(string(input)))
    if err != nil {
        log.Fatal(err)
    }

    // Generate the diamond pattern
    var builder strings.Builder

    // Upper half of the diamond including the middle row
    for i := 1; i <= n; i++ {
        // Add spaces
        for j := 1; j <= n-i; j++ {
            builder.WriteString(" ")
        }
        // Add asterisks
        for k := 1; k <= 2*i-1; k++ {
            builder.WriteString("*")
        }
        builder.WriteString("\n")
    }

    // Lower half of the diamond
    for i := n - 1; i >= 1; i-- {
        // Add spaces
        for j := 1; j <= n-i; j++ {
            builder.WriteString(" ")
        }
        // Add asterisks
        for k := 1; k <= 2*i-1; k++ {
            builder.WriteString("*")
        }
        builder.WriteString("\n")
    }

    // Write the pattern to output.txt
    err = ioutil.WriteFile("output.txt", []byte(builder.String()), 0644)
    if err != nil {
        log.Fatal(err)
    }
}
