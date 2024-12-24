package practiceQuestion;

import java.io.*;
import java.util.*;   

public class mathParseInt {
    public static void main(String[] args) throws IOException {
        // File paths
        File inputFile = new File("practiceQuestion/in.txt");
        File outputFile = new File("practiceQuestion/out.txt");

        BufferedReader br = new BufferedReader(new FileReader(inputFile));
        BufferedWriter bw = new BufferedWriter(new FileWriter(outputFile));

        // Read input
        int T = Integer.parseInt(br.readLine().trim()); // Number of test cases
        for (int c = 1; c <= T; c++) {
            int N = Integer.parseInt(br.readLine().trim()); // Size of the array
            String[] nums = br.readLine().trim().split("\\s+");

            // Process and compute results
            int[] results = new int[N];
            for (int i = 0; i < N; i++) {
                results[i] = parseInt(nums[i]); // Convert each string to integer
            }

            // Write result to output file
            bw.write("Case #" + c + ": " + Arrays.toString(results));
            bw.newLine();
        }

        // Close files
        br.close();
        bw.close();
    }

    // Method to parse string into integer
    public static int parseInt(String text) {
        int sum = 0;
        int powLevel = 0;
        for (int i = text.length() - 1; i >= 0; i--) {
            char c = text.charAt(i);
            sum += Math.pow(10, powLevel) * ((int)c - (int)'0');
            powLevel++;
        }
        return sum; // Return the computed integer value
    }

    // public static void main(String[] args) {
    //     System.out.println(parseInt("123")); // 123
    //     System.out.println(parseInt("456")); // 456
    //     System.out.println(parseInt("789")); // 789
    // }

}
