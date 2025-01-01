public class Solution {
    static int numberOfGoodIndices(int n, int []a) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            int divisibleCount = 0;
            for (int j = 0; j < n; j++) {
                if (i != j && a[i] % a[j] == 0) {
                    divisibleCount++;
                }
            }
            if (divisibleCount >= 2) {
                count++;
            }
        }
        return count;
    }
}

// Number of Good Indices 