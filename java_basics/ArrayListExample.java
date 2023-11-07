import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        // Create an ArrayList of Integers
        ArrayList<Integer> numbers = new ArrayList<>();

        // Add elements to the ArrayList
        numbers.add(5);
        numbers.add(10);
        numbers.add(15);
        numbers.add(20);
        numbers.add(25);

        // Print the ArrayList
        System.out.println(numbers);

        // Get the size of the ArrayList
        System.out.println("Size: " + numbers.size());

        // Access elements of the ArrayList
        System.out.println("Element at index 0: " + numbers.get(4));

        // Delete elements from the ArrayList
        numbers.remove(2);
        System.out.println(numbers);
    }
}
