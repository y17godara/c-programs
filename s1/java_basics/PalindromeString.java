public class PalindromeString {

    public static boolean findPalinderome(String str){
        int len = str.length();
        for(int i = 0; i < len/2; i++){
            if(str.charAt(i) != str.charAt(len-1-i)){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]) {
        String str = "mmaaddaamm";
        boolean isPalinderome = findPalinderome(str);
        System.out.println(isPalinderome);
    }
}
