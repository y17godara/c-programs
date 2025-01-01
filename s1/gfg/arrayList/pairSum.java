import java.util.*;

public class pairSum {

    public static int pairSumBruteForce(ArrayList<Integer> arr, int target) {
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr.get(i) + arr.get(j) == target){
                    return 1;
                }
            }
        }
        return -1;
    }

    public static int pairSumPointer(ArrayList<Integer> arr, int target){
        int left = 0;
        int right = arr.size() - 1;

        while(left < right){
            if(arr.get(left) + arr.get(right) == target){
                return 1;
            }else if(arr.get(left) + arr.get(right) < target){
                left++;
            }else{
                right--;
            }
        }

        return -1;
    }

    public static void main(String args[]) {
        ArrayList<Integer> arr = new ArrayList<>();

        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(4);
        arr.add(5);
        arr.add(6);

        int target = 3;
        // System.out.println(pairSumBruteForce(arr, target));
        System.out.println(pairSumPointer(arr, target));
    }
}
