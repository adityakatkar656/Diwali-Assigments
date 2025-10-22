

public class MissingNumber {
    public static void main(String[] args) {
        int[] arr = {3, 0, 1}; // Example input
        int n = arr.length;
        
        // Calculate expected sum of numbers from 0 to n
        int expectedSum = n * (n + 1) / 2;
        
        // Calculate actual sum of array elements
        int actualSum = 0;
        for (int num : arr) {
            actualSum += num;
        }

        // Missing number is the difference
        int missingNumber = expectedSum - actualSum;

        System.out.println("Missing number is: " + missingNumber);
    }
}
