import java.util.Scanner;

public class Sub_Task3 {
    public static void main(String[] args) {
        // Create a Scanner object for user input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a number
        System.out.print("Enter the number of rows for the diamond pattern: ");
        int n = scanner.nextInt();

        // Validate the input
        if (n <= 0) {
            System.out.println("Please enter a positive integer.");
            return;
        }

        // Generate and print the diamond pattern
        printDiamond(n);

        // Close the scanner
        scanner.close();
    }

    // Function to generate and print the diamond pattern
    private static void printDiamond(int n) {
        // Top half including the middle line
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print(" ");
            }
            // Print asterisks
            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            // Move to the next line
            System.out.println();
        }

        // Bottom half excluding the middle line
        for (int i = n - 2; i >= 0; i--) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print(" ");
            }
            // Print asterisks
            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }
            // Move to the next line
            System.out.println();
        }
    }
}

