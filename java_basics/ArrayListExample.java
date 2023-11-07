import java.util.*;

public class ArrayListExample {

    public static void part1() {
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

    public static void part2(){
        ArrayList<Integer> nums = new ArrayList<>();

        // print reverse 
        for (int i = 0; i < 10; i++) {
            nums.add(i);
        }
        System.out.println("Print reverse");
        for (int i = nums.size() - 1; i >= 0; i--) {
            System.out.println(nums.get(i));
        }

        // find maximum
        int max = nums.get(0);
        for (int i = 1; i < nums.size(); i++) {
            max = Math.max(max, i);
        }
        System.out.println("Max: " + max);

        // swap 2 elements
        int temp = nums.get(0);
        nums.set(0, nums.get(1));
        nums.set(1, temp);
        System.out.println(nums);
    }

    

    public static void main(String[] args) {
        part2();
    }
}
