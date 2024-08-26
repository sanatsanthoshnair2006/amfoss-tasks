# Define file paths
input_file = 'input.txt'
output_file = 'output.txt'

begin
  # Read the content from input.txt
  content = File.read(input_file)

  # Write the content to output.txt
  File.write(output_file, content)

  puts "Content successfully copied from #{input_file} to #{output_file}."
rescue Errno::ENOENT => e
  puts "An error occurred: #{e.message}"
rescue IOError => e
  puts "An I/O error occurred: #{e.message}"
end
