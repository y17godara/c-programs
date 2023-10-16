public class searchInMatrix {

    public static void searchKey(int a[][], int key) {
        if (key < a[0][0] || key > a[a.length - 1][a[0].length - 1]) {
            System.out.println("Element not found");
            return;
        }

        int row = 0, col = a[0].length - 1;

        while (row < a.length && col >= 0) {
            if (key == a[row][col]) {
                System.out.println("Index: (" + row + ", " + col + ")");
                return;
            } else if (key < a[row][col]) {
                if (col > 0) {
                    col--;
                }
            } else if (key > a[row][col]) {
                row++;
            }
        }

        System.out.println("Element not found");
    }

    public static void main(String args[]) {
        int a[][] = {
                { 10, 20, 30, 40 },
                { 15, 25, 35, 45 },
                { 27, 29, 37, 48 },
                { 32, 33, 39, 50 }
        };

        searchKey(a, 21);
    }
}
