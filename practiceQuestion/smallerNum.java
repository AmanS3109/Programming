package practiceQuestion;

import java.io.*;
import java.util.*;

public class smallerNum {
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
            int[] nums = Arrays.stream(br.readLine().trim().split("\\s+"))
                               .mapToInt(Integer::parseInt).toArray();

            // Process and compute result
            int[] result = smallerNumbersThanCurrent(nums);

            // Write result to output file
            bw.write("Case #" + c + ": " + Arrays.toString(result));
            bw.newLine();
        }

        // Close files
        br.close();
        bw.close();
    }

    public static int[] smallerNumbersThanCurrent(int[] nums) {
        int[] temp = nums.clone();
        Arrays.sort(temp);

        Map<Integer, Integer> hashmap = new HashMap<>();
        for (int i = 0; i < temp.length; i++) {
            if (!hashmap.containsKey(temp[i])) {
                hashmap.put(temp[i], i);
            }
        }

        int[] res = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            res[i] = hashmap.get(nums[i]);
        }

        return res;
    }
}
