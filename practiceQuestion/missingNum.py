def missing_num(arr):
    return sum(range(len(arr)+1)) - sum(arr)

    

def main():
    """Main function to process input and output."""
    try:
        # Open input and output files
        with open("in.txt", "r") as infile, open("out.txt", "w") as outfile:
            T = int(infile.readline().strip())  # Number of test cases

            for c in range(1, T + 1):
                N = int(infile.readline().strip())  # Size of the array
                arr = list(map(int, infile.readline().strip().split()))  # Array elements
                
                # Check for duplicates
                missing_number = missing_num(arr)
                
                # Write result to the output file
                result = f"Case #{c}: Missing number is {missing_number}\n"
                outfile.write(result)
    except Exception as e:
        # If there is an error, write it to the output file for debugging
        with open("out.txt", "w") as outfile:
            outfile.write(f"Error: {str(e)}\n")

if __name__ == "__main__":
    main()