public class searchKeyTwoDarray {
    public static void main(String args[]){
        int arr[][] = {{1,2,3}, {4,4,5}, {7,8,9}};

        int key = 5;

        int result = searchKey(arr, key);
        if(result == -1){
            System.out.println("NOT FOUND");
        }
        else{
            System.out.println("Index: "+ result);
        }

    }

    public static int searchKey(int arr[][], int key){
        int index = -1;
        int n = arr.length;
        int m = arr.length;

        for(int i=0; i<=n-1; i++){
            for(int j=0; j<=m-1; j++){
                if(arr[i][j] == key){
                    index = arr[i][j];
                }
            }
        }

        return index;
    } 
}
