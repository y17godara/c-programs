import java.util.*;

class maxWater {

    // brute force approach
    public static int storeWaterBruteForce(ArrayList<Integer> height) {
        int maxWater = 0;

        for (int i = 0; i <= height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                int ht = Math.min(height.get(i), height.get(j));
                int wd = j - i;

                int water = ht * wd;

                maxWater = Math.max(maxWater, water);
            }
        }
        return maxWater;
    }

    public static void main(String[] args) {
        // array list of building
        ArrayList<Integer> buildings = new ArrayList<>();
        buildings.add(3);
        buildings.add(8);
        buildings.add(6);
        buildings.add(2);
        buildings.add(5);
        buildings.add(4);
        buildings.add(8);
        buildings.add(3);
        buildings.add(7);
        // print the array list
        System.out.println(storeWaterBruteForce(buildings));
    }
}