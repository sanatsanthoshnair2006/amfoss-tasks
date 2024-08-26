import System.IO

main :: IO ()
main = do
    -- Open the input file in read mode
    inputFile <- openFile "input.txt" ReadMode
    -- Read the contents of input.txt
    content <- hGetContents inputFile
    -- Write the contents to output.txt
    writeFile "output.txt" content
    -- Close the input file
    hClose inputFile
