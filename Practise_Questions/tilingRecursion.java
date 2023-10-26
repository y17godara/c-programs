public class tilingRecursion {

    public static int tilingProblem(int n){

        // base case
        if(n==0 || n==1){
            return 1;
        }

        // vertical
        int vWays = tilingProblem(n-1);
        
        // horizontal
        int hWays = tilingProblem(n-2);

        int totalWays = vWays+hWays;

        return totalWays;
    }
    public static void main(String args[]){
        int area = 4;
        System.out.println(tilingProblem(area));
    }
}
