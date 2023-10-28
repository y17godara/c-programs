public class SearchInRoatatedSortedArray {
    // search in rotated sorted array
    public static int search(int a[], int target, int start, int end) {
        // base case
        if (start > end) {
            return -1;
        }

        // find the pivot element
        int mid = (start + end) / 2;

        // case 1
        if (a[mid] == target) {
            return mid;
        }

        // case 2 : line 1
        if (a[start] <= a[mid]) {
            // case 1: left
            if (a[start] <= target && target <= a[mid]) {
                return search(a, target, start, mid - 1);
            }
            // case 2: right
            else {
                return search(a, target, mid + 1, end);
            }
        }

        // case 2 : line 2
        else {
            // case 1: left
            if (a[mid] <= target && target <= a[end]) {
                return search(a, target, mid + 1, end);
            }
            // case 2: right
            else {
                return search(a, target, start, mid - 1);
            }
        }
    }

    public static void main(String args[]) {
        int arr[] = { 4, 5, 6, 7, 0, 1, 2 };
        int target = 0;

        int result = search(arr, target, 0, arr.length - 1);
        System.out.println(result);
    }
}
