def isSorted(arr, n):
    # using recursion
    #base case
    if n == 0 or n == 1:
        return True
    
    # recurse relation
    return arr[n-1] >= arr[n-2] and isSorted(arr, n-1)
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
                is_sorted = isSorted(arr, len(arr))
                
                # Write result to the output file
                result = f"Case #{c}: {'Yes' if is_sorted else 'No'}\n"
                outfile.write(result)
    except Exception as e:
        # If there is an error, write it to the output file for debugging
        with open("out.txt", "w") as outfile:
            outfile.write(f"Error: {str(e)}\n")

if __name__ == "__main__":
    main()