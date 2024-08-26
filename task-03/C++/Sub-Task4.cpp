#include <iostream>
#include <fstream>

void generateDiamond(int n, std::ofstream& outputFile) {
    // Top half including the middle line
    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            outputFile << " ";
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            outputFile << "*";
        }
        outputFile << std::endl;
    }

    // Bottom half excluding the middle line
    for (int i = n - 2; i >= 0; --i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            outputFile << " ";
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            outputFile << "*";
        }
        outputFile << std::endl;
    }
}

int main() {
    int n;
    std::ifstream inputFile("input.txt");  // Open input.txt for reading
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

    // Read the number from input.txt
    if (!(inputFile >> n)) {
        std::cerr << "Error reading the number from input.txt" << std::endl;
        return 1;
    }
    inputFile.close();

    // Validate the number
    if (n <= 0) {
        std::cerr << "The number must be a positive integer." << std::endl;
        return 1;
    }

    // Generate the diamond pattern and write it to output.txt
    generateDiamond(n, outputFile);
    outputFile.close();

    std::cout << "Diamond pattern generated successfully in output.txt." << std::endl;

    return 0;
}
