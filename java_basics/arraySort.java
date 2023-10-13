public class arraySort {

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 1, 4, 5, 2, 3, 6 };
        arrbubleSort(arr);
        arrSelectionSort(arr);
    }

    public static void arrayPrint(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println("");
    }

    public static void arrbubleSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                // swap
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        arrayPrint(arr);
    }

    public static void arrSelectionSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            int min = i;
            for (int j = i + 1; j < arr.length - 2; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
        }
        arrayPrint(arr);
    }

}
