#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000  // Define a maximum length for the input string

int main() {
    FILE *inputFile, *outputFile;
    char buffer[MAX_LENGTH];

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }

    // Read the string from the input file
    if (fgets(buffer, MAX_LENGTH, inputFile) == NULL) {
        perror("Error reading from input file");
        fclose(inputFile);
        return EXIT_FAILURE;
    }
    fclose(inputFile);

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        return EXIT_FAILURE;
    }

    // Write the string to the output file
    if (fputs(buffer, outputFile) == EOF) {
        perror("Error writing to output file");
        fclose(outputFile);
        return EXIT_FAILURE;
    }
    fclose(outputFile);

    printf("String successfully copied from input.txt to output.txt\n");

    return EXIT_SUCCESS;
}

