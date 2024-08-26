defmodule FileCopy do
  # Main function to read from input file and write to output file
  def run do
    input_file = "input.txt"
    output_file = "output.txt"

    case File.read(input_file) do
      {:ok, content} ->
        # Write the content to output file
        case File.write(output_file, content) do
          :ok ->
            IO.puts("Content successfully copied from #{input_file} to #{output_file}.")
          {:error, reason} ->
            IO.puts("Failed to write to #{output_file}: #{reason}")
        end

      {:error, reason} ->
        IO.puts("Failed to read from #{input_file}: #{reason}")
    end
  end
end

# Run the program
FileCopy.run()
