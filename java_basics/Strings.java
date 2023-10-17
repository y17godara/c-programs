import java.util.Scanner;
public class Strings {
    public static void printString(String str){
        for(int i=0;i<str.length();i++){
            System.out.print(str.charAt(i));
        }
        System.out.println();
    }
    public static void main(String args[]){
         /* 
        char arr[] = {'a','b','c','d','e'};
        String str = "abcde";
        String str2 = new String("adcde");

        // strings are immutable

        Scanner sc = new Scanner(System.in);

        String name;
        name = sc.nextLine(); // input string
        System.out.println(name);

        // length of string
        System.out.println(name.length());

        // concatination
        String firstName = "John";
        String lastName = "Doe";
        
        String fullName = firstName + " " + lastName;
        System.out.println(fullName); 
        */

        // string char at index : charAt()
        String txt = "Hello World";
        System.out.println(txt.charAt(0)); // H
        printString(txt);
    }
}