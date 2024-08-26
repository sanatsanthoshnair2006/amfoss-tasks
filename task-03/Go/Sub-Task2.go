package main

import (
    "io/ioutil"
    "log"
)

func main() {
    // Read the contents of input.txt
    input, err := ioutil.ReadFile("input.txt")
    if err != nil {
        log.Fatal(err)
    }

    // Write the contents to output.txt
    err = ioutil.WriteFile("output.txt", input, 0644)
    if err != nil {
        log.Fatal(err)
    }
}
