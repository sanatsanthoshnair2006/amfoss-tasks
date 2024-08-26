const fs = require('fs');

// Function to copy content from input.txt to output.txt
function copyFile() {
    // Read the content from input.txt
    fs.readFile('input.txt', 'utf8', (err, data) => {
        if (err) {
            console.error('Error reading input.txt:', err);
            return;
        }

        // Write the content to output.txt
        fs.writeFile('output.txt', data, (err) => {
            if (err) {
                console.error('Error writing to output.txt:', err);
                return;
            }

            console.log('File copied successfully.');
        });
    });
}

// Call the function
copyFile();
