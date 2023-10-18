public class SubString {

    public static String subString(String str, int L, int R){
        // if range is invalid
        if(L < 0 || R >= str.length() || L > R){
            return "Invalid range";
        }

        StringBuilder subStr = new StringBuilder("");

        for(int i=L; i<=R; i++){
            subStr.append(str.charAt(i));
        }
        return subStr.toString();
    }

    public static void main(String args[]){
        String str = "cdbkdub";
        int L = 2; int R = 6;
        String subString = subString(str, L, R);
        System.out.println(subString);
    }
}