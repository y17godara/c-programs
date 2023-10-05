public class SumOfDigits {
    public static void main(String args[]) {
        int n = 12345;

        int temp = n;
        int sum = 0;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        System.out.println("Sum of digits of " + n + " is " + sum);
    }
}
