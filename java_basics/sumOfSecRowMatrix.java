public class sumOfSecRowMatrix {

    public static int sumOfSecRowMatrix(int a[][]) {

        int sum = 0;
        for (int i = 1; i <= 1; i++) {
            for (int j = 0; j < a.length; j++) {
                sum = sum + a[i][j];
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        int a[][] = { { 1, 4, 9 }, { 11, 4, 3 }, { 2, 2, 3 } };

        int ans = sumOfSecRowMatrix(a);
        System.out.println(ans);
    }
}
