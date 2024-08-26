#include <stdio.h>
#include <stdlib.h>

void generateDiamond(int n, FILE *outputFile) {
    int i, j;

    // Top half including the middle line
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            fprintf(outputFile, " ");
        }
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++) {
            fprintf(outputFile, "*");
        }
        fprintf(outputFile, "\n");
    }

    // Bottom half excluding the middle line
    for (i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            fprintf(outputFile, " ");
        }
        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++) {
            fprintf(outputFile, "*");
        }
        fprintf(outputFile, "\n");
    }
}

int main() {
    int n;
    FILE *inputFile;
    FILE *outputFile;

    // Open input.txt for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return EXIT_FAILURE;
    }

    // Read the number from input.txt
    if (fscanf(inputFile, "%d", &n) != 1) {
        fprintf(stderr, "Error reading the number from input.txt.\n");
        fclose(inputFile);
        return EXIT_FAILURE;
    }
    fclose(inputFile);

    // Validate the number
    if (n <= 0) {
        fprintf(stderr, "The number must be a positive integer.\n");
        return EXIT_FAILURE;
    }

    // Open output.txt for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output.txt");
        return EXIT_FAILURE;
    }

    // Generate the diamond pattern and write it to output.txt
    generateDiamond(n, outputFile);
    fclose(outputFile);

    printf("Diamond pattern generated successfully in output.txt.\n");

    return EXIT_SUCCESS;
}
