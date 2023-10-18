public class smallToCapitalString {

    public static String convertString(String str) {
        StringBuilder titleCaseString = new StringBuilder("");

        boolean capitalizeNext = true;
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (Character.isWhitespace(c)) {
                titleCaseString.append(" ");
                capitalizeNext = true;
            } else if (capitalizeNext) {
                titleCaseString.append(Character.toUpperCase(c));
                capitalizeNext = false;
            } else {
                titleCaseString.append(c);
            }
        }

        return titleCaseString.toString();
    }

    public static void main(String args[]) {
        String str = "my name is Devil dhink";
        String titleCaseString = convertString(str);

        System.out.println(titleCaseString);
    }
}