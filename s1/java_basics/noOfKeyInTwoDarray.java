public class noOfKeyInTwoDarray {

    public static int countKey(int a[][], int key, int count){

        for(int i = 0; i < a.length; i++){
            for(int j = 0; j < a[0].length; j++){

                if (key == a[i][j]) {
                    count++;
                }
            }
        }

        System.out.println("Count: " + count);
        return count;
    }

    public static void main(String args[]){
        int a[][] = {
                { 1, 2, 3, 4, 5 },
                { 6, 7, 8, 9, 10 },
                { 11, 12, 13, 14, 15 },
                { 16, 17, 18, 19, 20 }
        };

        int key = 20;
        int count = 0;

        countKey(a, key, count);
    }
}