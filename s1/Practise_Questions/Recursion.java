public class Recursion {
    public static void printDec(int n) {
        if (n == 0) {
            System.out.println(0);
            return;
        }
        System.out.println(n);
        printDec(n - 1);
    }

    public static void main(String args[]) {
        int n = 9;
        printDec(n);
    }
}
