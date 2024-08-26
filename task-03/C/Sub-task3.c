#include <stdio.h>

void printDiamond(int n) {
    int i, j;
    
    // Top half including the middle line
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Bottom half excluding the middle line
    for (i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Prompt the user for input
    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &n);
    
    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print the diamond pattern
    printDiamond(n);

    return 0;
}
