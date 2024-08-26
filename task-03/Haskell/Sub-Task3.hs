main :: IO ()
main = do
    -- Prompt the user for input
    putStrLn "Enter the number of rows for the diamond pattern (n):"
    -- Read the input and convert it to an integer
    input <- getLine
    let n = read input :: Int
    -- Generate and print the diamond pattern
    putStrLn $ generateDiamond n

-- Function to generate the diamond pattern
generateDiamond :: Int -> String
generateDiamond n = unlines $ upperHalf ++ lowerHalf
  where
    upperHalf = [generateLine i n | i <- [1..n]]
    lowerHalf = [generateLine i n | i <- [n-1,n-2..1]]

-- Function to generate a single line of the diamond
generateLine :: Int -> Int -> String
generateLine i n = replicate (n - i) ' ' ++ replicate (2 * i - 1) '*'
