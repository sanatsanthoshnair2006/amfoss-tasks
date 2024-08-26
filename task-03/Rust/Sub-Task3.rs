use std::io::{self, Write};

fn main() {
    // Prompt the user for input
    print!("Enter the number of rows for the diamond pattern (n): ");
    io::stdout().flush().expect("Failed to flush stdout");

    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read input");

    let n: usize = input.trim().parse().expect("Please enter a valid number");

    // Generate and print the diamond pattern
    print_diamond(n);
}

// Function to generate and print the diamond pattern
fn print_diamond(n: usize) {
    // Print the upper half of the diamond, including the middle row
    for i in 1..=n {
        // Print leading spaces
        for _ in 0..(n - i) {
            print!(" ");
        }
        // Print asterisks
        for _ in 0..(2 * i - 1) {
            print!("*");
        }
        // Move to the next line
        println!();
    }

    // Print the lower half of the diamond
    for i in (1..n).rev() {
        // Print leading spaces
        for _ in 0..(n - i) {
            print!(" ");
        }
        // Print asterisks
        for _ in 0..(2 * i - 1) {
            print!("*");
        }
        // Move to the next line
        println!();
    }
}
