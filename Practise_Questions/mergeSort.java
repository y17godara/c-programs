public class mergeSort {

    public static int merge(int a[], int s, int mid, int e) {

        int i = s; // Start of first array
        int j = mid + 1; // Start of second array
        int k = s; // Start of temp array

        int temp[] = new int[e + 1]; // Temporary array

        while (i <= mid && j <= e) {
            if (a[i] < a[j]) {
                temp[k] = a[i];
                i++;
                k++;
            } else {
                temp[k] = a[j];
                j++;
                k++;
            }
        }

        // If first array is not completely traversed
        while (i <= mid) {
            temp[k] = a[i];
            i++;
            k++;
        }

        // If second array is not completely traversed
        while (j <= e) {
            temp[k] = a[j];
            j++;
            k++;
        }

        // Copy the elements of temp array to original array
        for (int x = s; x <= e; x++) {
            a[x] = temp[x];
        }

        return 0;

    }

    public static int mergeSortArr(int a[], int s, int e) {

        // Base Case
        if (s >= e) {
            return 0;
        }

        int mid = (s + e) / 2;

        mergeSortArr(a, s, mid); // Sort the first half
        mergeSortArr(a, mid + 1, e); // Sort the second half

        merge(a, s, mid, e); // Merge the two halves

        return 0;
    }

    public static void main(String args[]) {
        int arr[] = { 12, 11, 13, 5, 6, 7, 1, 2, 3, 4, 5, 6 };

        mergeSortArr(arr, 0, arr.length - 1);
    }
}
