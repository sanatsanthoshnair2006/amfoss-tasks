use std::fs::File;
use std::io::{self, Read, Write};
use std::process;

fn main() {
    // Read the number 'n' from input.txt
    let mut input_file = match File::open("input.txt") {
        Ok(file) => file,
        Err(error) => {
            eprintln!("Failed to open input.txt: {}", error);
            process::exit(1);
        }
    };

    let mut input = String::new();
    if let Err(error) = input_file.read_to_string(&mut input) {
        eprintln!("Failed to read from input.txt: {}", error);
        process::exit(1);
    }

    let n: usize = input.trim().parse().expect("Please enter a valid number");

    // Generate the diamond pattern
    let diamond_pattern = generate_diamond(n);

    // Write the diamond pattern to output.txt
    let mut output_file = match File::create("output.txt") {
        Ok(file) => file,
        Err(error) => {
            eprintln!("Failed to create output.txt: {}", error);
            process::exit(1);
        }
    };

    if let Err(error) = output_file.write_all(diamond_pattern.as_bytes()) {
        eprintln!("Failed to write to output.txt: {}", error);
        process::exit(1);
    }

    println!("Diamond pattern successfully written to output.txt");
}

// Function to generate the diamond pattern
fn generate_diamond(n: usize) -> String {
    let mut result = String::new();

    // Print the upper half of the diamond, including the middle row
    for i in 1..=n {
        // Print leading spaces
        result.push_str(&" ".repeat(n - i));
        // Print asterisks
        result.push_str(&"*".repeat(2 * i - 1));
        // Move to the next line
        result.push_str("\n");
    }

    // Print the lower half of the diamond
    for i in (1..n).rev() {
        // Print leading spaces
        result.push_str(&" ".repeat(n - i));
        // Print asterisks
        result.push_str(&"*".repeat(2 * i - 1));
        // Move to the next line
        result.push_str("\n");
    }

    result
}
