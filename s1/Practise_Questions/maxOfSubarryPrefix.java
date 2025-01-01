package Practise_Questions;
import java.util.*;

public class maxOfSubarryPrefix {

    public static int maxOfSubarryPrefix(int[] arr) {
        int max = Integer.MIN_VALUE;
        for(int i=1; i<=arr.length; i++) {
            for(int j=0; j<arr.length; j++) {
                
            }
            System.out.print(max + " ");
            max = Integer.MIN_VALUE;
        }
        return max;
    }
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
        maxOfSubarryPrefix(arr);
    }
}
