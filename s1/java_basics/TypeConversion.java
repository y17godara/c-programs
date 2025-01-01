public class TypeConversion {
    public static void main(String args[]) {
        int a = 10;
        double b = a; // automatic type conversion
        System.out.println(a);
        System.out.println(b);
        double c = 10.5;
        int d = (int) c; // manual type conversion
        System.out.println(c);
        System.out.println(d);
    }
    
}

// conditions for type conversion
// a. type compatibility
// b. size of the data type { destination data type should be larger than source data type }