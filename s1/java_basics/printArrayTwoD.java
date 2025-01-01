public class printArrayTwoD {
    public static void main(String args[]) {
        int arr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 18, 9 } };

        printArray(arr);
    }

    public static void printArray(int arr[][]){
        int rowSize = arr.length;
        int colSize = arr[0].length;

        for(int i=0; i<=rowSize-1; i++) {
            for(int j=0; j<=colSize-1; j++){
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
    }
}
