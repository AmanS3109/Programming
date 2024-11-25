def majorityElementII(arr, n):
    res = []
    for i in range(n):
        
        # Count the frequency of arr[i]
        cnt = 0
        for j in range(i, n):
            if arr[j] == arr[i]:
                cnt += 1
        
        # Check if arr[i] is a majority element
        if cnt > (n // 3):
            
            # Add arr[i] only if it is not already
            # present in the result
            if len(res) == 0 or arr[i] != res[0]:
                res.append(arr[i])
        
        # If we have found two majority elements, 
        # we can stop our search
        if len(res) == 2:
            if res[0] > res[1]:
                res[0], res[1] = res[1], res[0]
            break

    return res
    
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
                majorityELement = majorityElementII(arr, len(arr))
                
                # Write result to the output file
                result = f"Case #{c}: {majorityELement if majorityELement else -1}\n"
                outfile.write(result)
    except Exception as e:
        # If there is an error, write it to the output file for debugging
        with open("out.txt", "w") as outfile:
            outfile.write(f"Error: {str(e)}\n")

if __name__ == "__main__":
    main()

