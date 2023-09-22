import java.util.Scanner;

class Solution {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int l, b;
    l = sc.nextInt();
    b = sc.nextInt();
    int area = (l * b);
    System.out.println(area);
    sc.close();
  }
}