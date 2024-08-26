defmodule Diamond do
  def print_diamond(n) when n > 0 do
    upper_half(n)
    lower_half(n - 1)
  end

  defp upper_half(n) do
    for i <- 0..(n - 1) do
      spaces = String.duplicate(" ", n - i - 1)
      stars = String.duplicate("*", 2 * i + 1)
      IO.puts("#{spaces}#{stars}")
    end
  end

  defp lower_half(n) do
    for i <- (n - 1)..0 do
      spaces = String.duplicate(" ", n - i - 1)
      stars = String.duplicate("*", 2 * i + 1)
      IO.puts("#{spaces}#{stars}")
    end
  end
end

defmodule Main do
  def run do
    IO.write("Enter a number: ")
    input = IO.gets("") |> String.trim()
    case Integer.parse(input) do
      {n, _} when n > 0 ->
        Diamond.print_diamond(n)
      _ ->
        IO.puts("Please enter a valid positive integer.")
    end
  end
end

Main.run()
