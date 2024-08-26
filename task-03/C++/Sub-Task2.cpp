#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt"); // Open input.txt for reading
    std::ofstream outputFile("output.txt"); // Open output.txt for writing

    // Check if input file opened successfully
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input.txt" << std::endl;
        return 1;
    }

    // Check if output file opened successfully
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output.txt" << std::endl;
        return 1;
    }

    std::string line;

    // Read the string from input.txt
    std::getline(inputFile, line);

    // Write the string to output.txt
    outputFile << line;

    // Close the files
    inputFile.close();
    outputFile.close();

    std::cout << "String copied successfully from input.txt to output.txt." << std::endl;

    return 0;
}
