public class Solution {
    static int parityProblems(int[] arr) {
        int maxLength = 0;
        // Iterate over all possible subsequences of the array.
        for (int i = 0; i < (1 << arr.length); i++) {
            int sum = 0;
            for (int j = 0; j < arr.length; j++) {
                if ((i & (1 << j)) > 0) {
                    sum += arr[j];
                }
            }

            // If the sum of the current subsequence is even, update the maximum length.
            if (sum % 2 == 0) {
                maxLength = Math.max(maxLength, Integer.bitCount(i));
            }
        }

        return maxLength;
    }
}