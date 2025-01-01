
package contests.random;
import java.util.* ;
import java.io.*; 

import java.util.ArrayList;

public class q1 {
    	public static void rotate(ArrayList<Integer> arr, int n) {
		// Store the last element of the array in a temporary variable.
        int last = arr.get(arr.size() - 1);

        // Shift all the elements of the array to the right by one position.
        for (int i = arr.size() - 2; i >= 0; i--) {
            arr.set(i + 1, arr.get(i));
        }

        // Add the last element of the array to the beginning of the array.
        arr.set(0, last);
	}
}
