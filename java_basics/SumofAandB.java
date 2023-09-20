import java.util.Scanner;

public class SumofAandB {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        // Add the two numbers
        int sum = a + b;
        System.out.println("Sum of " + a + " and " + b + " is " + sum);
        sc.close();
    }
}
