use std::fs::File;
use std::io::{self, Read, Write};
use std::process;

fn main() {
    // Read the contents of input.txt
    let mut input_file = match File::open("input.txt") {
        Ok(file) => file,
        Err(error) => {
            eprintln!("Failed to open input.txt: {}", error);
            process::exit(1);
        }
    };

    let mut content = String::new();
    if let Err(error) = input_file.read_to_string(&mut content) {
        eprintln!("Failed to read from input.txt: {}", error);
        process::exit(1);
    }

    // Write the contents to output.txt
    let mut output_file = match File::create("output.txt") {
        Ok(file) => file,
        Err(error) => {
            eprintln!("Failed to create output.txt: {}", error);
            process::exit(1);
        }
    };

    if let Err(error) = output_file.write_all(content.as_bytes()) {
        eprintln!("Failed to write to output.txt: {}", error);
        process::exit(1);
    }

    println!("Content successfully copied from input.txt to output.txt");
}
