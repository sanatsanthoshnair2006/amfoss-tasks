defmodule Diamond do
  def generate_diamond(n) when n > 0 do
    upper_half(n) ++ lower_half(n - 1)
  end

  defp upper_half(n) do
    for i <- 0..(n - 1) do
      spaces = String.duplicate(" ", n - i - 1)
      stars = String.duplicate("*", 2 * i + 1)
      "#{spaces}#{stars}\n"
    end
  end

  defp lower_half(n) do
    for i <- (n - 1)..0 do
      spaces = String.duplicate(" ", n - i - 1)
      stars = String.duplicate("*", 2 * i + 1)
      "#{spaces}#{stars}\n"
    end
  end
end

defmodule FileHandler do
  def process_files do
    case File.read("input.txt") do
      {:ok, content} ->
        case Integer.parse(String.trim(content)) do
          {n, _} when n > 0 ->
            diamond_pattern = Diamond.generate_diamond(n)
            File.write("output.txt", diamond_pattern)
          _ ->
            IO.puts("Invalid number in input.txt. Please ensure it is a positive integer.")
        end
      {:error, reason} ->
        IO.puts("Failed to read input.txt: #{reason}")
    end
  end
end

FileHandler.process_files()
