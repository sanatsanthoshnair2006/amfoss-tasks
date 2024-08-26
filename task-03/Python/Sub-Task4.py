def generate_diamond(n):
    diamond = []
    
    # Top half including the middle line
    for i in range(n):
        line = ' ' * (n - i - 1) + '*' * (2 * i + 1)
        diamond.append(line)
    
    # Bottom half excluding the middle line
    for i in range(n - 2, -1, -1):
        line = ' ' * (n - i - 1) + '*' * (2 * i + 1)
        diamond.append(line)
    
    return "\n".join(diamond)

def main():
    try:
        # Read the number from input.txt
        with open('input.txt', 'r') as file:
            n = int(file.read().strip())
        
        # Generate the diamond pattern
        diamond_pattern = generate_diamond(n)
        
        # Write the diamond pattern to output.txt
        with open('output.txt', 'w') as file:
            file.write(diamond_pattern)
        
        print("Diamond pattern generated successfully.")
    except FileNotFoundError:
        print("Error: 'input.txt' file not found.")
    except ValueError:
        print("Error: Invalid number in 'input.txt'.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    main()
