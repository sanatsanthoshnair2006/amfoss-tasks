# Function to generate and print the diamond pattern
def print_diamond(n)
  # Top half including the middle line
  (0...n).each do |i|
    # Print leading spaces
    print ' ' * (n - i - 1)
    # Print asterisks
    print '*' * (2 * i + 1)
    # Move to the next line
    puts
  end

  # Bottom half excluding the middle line
  (n - 2).downto(0) do |i|
    # Print leading spaces
    print ' ' * (n - i - 1)
    # Print asterisks
    print '*' * (2 * i + 1)
    # Move to the next line
    puts
  end
end

# Prompt user for input
print 'Enter the number of rows for the diamond pattern: '
n = gets.to_i

# Validate the input
if n > 0
  # Generate and print the diamond pattern
  print_diamond(n)
else
  puts 'Please enter a positive integer.'
end
