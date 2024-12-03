# Open input and output files
with open('in.txt', 'r') as infile, open('out.txt', 'w') as outfile:
    # Read the input from the file
    lines = infile.readlines()
    
    # Parse the first line for the array size `n` and the number of queries `q`
    n, q = map(int, lines[0].split())
    
    # Parse the second line for the array `nums`
    nums = list(map(int, lines[1].split()))
    
    # Create the prefix sum array
    pref = [0] * (n + 1)
    for i in range(n):
        pref[i + 1] = pref[i] + nums[i]
    
    # Process each query and write the results to the output file
    for i in range(q):
        a, b = map(int, lines[i + 2].split())
        # Calculate the sum for the range [a, b]
        result = pref[b] - pref[a - 1]
        # Write the result to the output file
        outfile.write(f"{result}\n")
