# Function to generate the diamond pattern
def generate_diamond(n)
  diamond = ""

  # Top half including the middle line
  (0...n).each do |i|
    # Append leading spaces
    diamond << ' ' * (n - i - 1)
    # Append asterisks
    diamond << '*' * (2 * i + 1)
    # Append new line
    diamond << "\n"
  end

  # Bottom half excluding the middle line
  (n - 2).downto(0) do |i|
    # Append leading spaces
    diamond << ' ' * (n - i - 1)
    # Append asterisks
    diamond << '*' * (2 * i + 1)
    # Append new line
    diamond << "\n"
  end

  diamond
end

# Define file paths
input_file = 'input.txt'
output_file = 'output.txt'

begin
  # Read the number from input.txt
  content = File.read(input_file).strip
  n = content.to_i

  # Validate the input
  if n > 0
    # Generate the diamond pattern
    diamond_pattern = generate_diamond(n)

    # Write the pattern to output.txt
    File.write(output_file, diamond_pattern)

    puts "Diamond pattern successfully written to #{output_file}."
  else
    puts 'Please enter a positive integer in input.txt.'
  end
rescue Errno::ENOENT => e
  puts "An error occurred: #{e.message}"
rescue IOError => e
  puts "An I/O error occurred: #{e.message}"
rescue ArgumentError => e
  puts "Invalid input: #{e.message}"
end
