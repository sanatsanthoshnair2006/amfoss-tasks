const fs = require('fs');

// Function to generate the diamond pattern
function generateDiamond(n) {
    let pattern = '';

    // Top half including the middle line
    for (let i = 0; i < n; i++) {
        let line = '';
        
        // Print leading spaces
        for (let j = 0; j < n - i - 1; j++) {
            line += ' ';
        }
        
        // Print asterisks
        for (let j = 0; j < 2 * i + 1; j++) {
            line += '*';
        }
        
        pattern += line + '\n';
    }

    // Bottom half excluding the middle line
    for (let i = n - 2; i >= 0; i--) {
        let line = '';
        
        // Print leading spaces
        for (let j = 0; j < n - i - 1; j++) {
            line += ' ';
        }
        
        // Print asterisks
        for (let j = 0; j < 2 * i + 1; j++) {
            line += '*';
        }
        
        pattern += line + '\n';
    }

    return pattern;
}

// Read the number from input.txt
fs.readFile('input.txt', 'utf8', (err, data) => {
    if (err) {
        console.error('Error reading input.txt:', err);
        return;
    }

    const n = parseInt(data, 10);

    if (isNaN(n) || n <= 0) {
        console.error('The number must be a positive integer.');
        return;
    }

    // Generate the diamond pattern
    const diamondPattern = generateDiamond(n);

    // Write the pattern to output.txt
    fs.writeFile('output.txt', diamondPattern, (err) => {
        if (err) {
            console.error('Error writing to output.txt:', err);
            return;
        }

        console.log('Diamond pattern generated successfully in output.txt.');
    });
});
