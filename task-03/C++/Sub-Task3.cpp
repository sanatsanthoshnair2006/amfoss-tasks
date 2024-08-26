#include <iostream>

void printDiamond(int n) {
    // Top half including the middle line
    for (int i = 0; i < n; ++i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << " ";
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Bottom half excluding the middle line
    for (int i = n - 2; i >= 0; --i) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << " ";
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;

    // Prompt the user for input
    std::cout << "Enter the number of rows for the diamond pattern: ";
    std::cin >> n;

    // Validate the input
    if (n <= 0) {
        std::cerr << "Please enter a positive integer." << std::endl;
        return 1;
    }

    // Print the diamond pattern
    printDiamond(n);

    return 0;
}
