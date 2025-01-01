public public class Solution {
    static int ninjaAndRangeMax(int n, int x, int y, int[] a) {
        if (x < 0 || y >= n || x > y) {
            return -1; 
        }

        int max_element = a[x]; 

        for (int i = x + 1; i <= y; i++) {
            if (a[i] > max_element) {
                max_element = a[i];
            }
        }

        return max_element;
    }
}