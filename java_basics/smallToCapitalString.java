public class smallToCapitalString {

    public static String convertString(String str){
        StringBuilder convertedString = new StringBuilder("");

        boolean capitalNext = true;
        for(int i=0; i<str.length(); i++){
            char c = str.charAt(i);
            if(Character.isWhitespace(c)){
                convertedString.append(" ");
                capitalNext = true;
            } else if(capitalNext){
                convertedString.append(Character.toUpperCase(c));
                capitalNext = false;
            } else {
                convertedString.append(c);
            }
        }

        return convertedString.toString();
    }
    
    public static void main(String args[]){
        String str = "my name is Devil dhink";
        String convertedString = convertString(str);

        System.out.println(convertedString);
    }
}
