import System.IO

main :: IO ()
main = do
    -- Read the number 'n' from input.txt
    inputFile <- openFile "input.txt" ReadMode
    input <- hGetLine inputFile
    let n = read input :: Int
    hClose inputFile

    -- Generate the diamond pattern
    let diamondPattern = generateDiamond n

    -- Write the diamond pattern to output.txt
    outputFile <- openFile "output.txt" WriteMode
    hPutStr outputFile diamondPattern
    hClose outputFile

-- Function to generate the diamond pattern
generateDiamond :: Int -> String
generateDiamond n = unlines $ upperHalf ++ lowerHalf
  where
    upperHalf = [generateLine i n | i <- [1..n]]
    lowerHalf = [generateLine i n | i <- [n-1,n-2..1]]

-- Function to generate a single line of the diamond
generateLine :: Int -> Int -> String
generateLine i n = replicate (n - i) ' ' ++ replicate (2 * i - 1) '*'
