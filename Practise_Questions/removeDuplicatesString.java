public class removeDuplicatesString {

    public static String removeDuplicatesStr(String str, int i, StringBuilder newStr, Boolean arr[]) {
        if (i == str.length()) {
            return newStr.toString();
        }

        char ch = str.charAt(i);
        if (arr[ch - 'a'] == null) {
            arr[ch - 'a'] = true;
            newStr.append(ch);
        }

        return removeDuplicatesStr(str, i + 1, newStr, arr);
    }


    public static void main(String args[]) {
        StringBuilder newStr = new StringBuilder("");
        Boolean arr[] = new Boolean[26];
        String str = "geeksforgeeks";
        System.out.println(removeDuplicatesStr(str, 0, newStr, arr));
    }
}
