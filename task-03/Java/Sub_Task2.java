import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Sub_Task2 {
    public static void main(String[] args) {
        // Define file paths
        Path inputFile = Paths.get("input.txt");
        Path outputFile = Paths.get("output.txt");

        try {
            // Read the content from input.txt
            String content = Files.readString(inputFile);

            // Write the content to output.txt
            Files.writeString(outputFile, content);

            System.out.println("File content copied successfully from input.txt to output.txt.");
        } catch (IOException e) {
            System.err.println("An error occurred: " + e.getMessage());
        }
    }
}
