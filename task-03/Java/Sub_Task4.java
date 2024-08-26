import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Sub_Task4 {
    public static void main(String[] args) {
        // Define file paths
        Path inputFile = Paths.get("input.txt");
        Path outputFile = Paths.get("output.txt");

        try {
            // Read the number from input.txt
            String content = Files.readString(inputFile).trim();
            int n = Integer.parseInt(content);

            // Validate the input
            if (n <= 0) {
                System.err.println("The number must be a positive integer.");
                return;
            }

            // Generate the diamond pattern
            String diamondPattern = generateDiamond(n);

            // Write the pattern to output.txt
            Files.writeString(outputFile, diamondPattern);

            System.out.println("Diamond pattern generated successfully in output.txt.");
        } catch (IOException e) {
            System.err.println("An error occurred while reading or writing files: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.err.println("The input is not a valid integer.");
        }
    }

    // Function to generate the diamond pattern
    private static String generateDiamond(int n) {
        StringBuilder sb = new StringBuilder();

        // Top half including the middle line
        for (int i = 0; i < n; i++) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                sb.append(" ");
            }
            // Print asterisks
            for (int j = 0; j < 2 * i + 1; j++) {
                sb.append("*");
            }
            // Move to the next line
            sb.append("\n");
        }

        // Bottom half excluding the middle line
        for (int i = n - 2; i >= 0; i--) {
            // Print leading spaces
            for (int j = 0; j < n - i - 1; j++) {
                sb.append(" ");
            }
            // Print asterisks
            for (int j = 0; j < 2 * i + 1; j++) {
                sb.append("*");
            }
            // Move to the next line
            sb.append("\n");
        }

        return sb.toString();
    }
}
