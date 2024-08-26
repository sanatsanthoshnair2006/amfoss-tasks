const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Function to generate and print the diamond pattern
function printDiamond(n) {
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
        
        console.log(line);
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
        
        console.log(line);
    }
}

// Prompt the user for input
rl.question('Enter the number of rows for the diamond pattern: ', (answer) => {
    const n = parseInt(answer, 10);

    if (isNaN(n) || n <= 0) {
        console.log('Please enter a positive integer.');
    } else {
        printDiamond(n);
    }

    // Close the readline interface
    rl.close();
});
