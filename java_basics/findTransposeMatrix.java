public class findTransposeMatrix {

    public static void transpose(int a[][]){
        int b[][] = new int[a.length][a.length];
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a.length;j++){
                b[i][j] = a[j][i];
            }
        }
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a.length;j++){
                System.out.print(b[i][j]+" ");
            }
            System.out.println();
        }
    }

    public static void transposeMatrix(int ar[][]){
        
    }

    public static void main(String args[]){
        int a[][] = { { 1, 4, 9 }, { 11, 4, 3 }};
        transpose(a);
        transposeMatrix(a);
    }
}
