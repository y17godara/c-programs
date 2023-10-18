// Given two strings S1 and S2 as input. Your task is to concatenate two strings and then reverse the string. Finally print the reversed string.
// Example:
// Input: S1 = "Geeks" , S2 = "forGeeks"
// Output: "skeeGrofskeeG" 
// Explanation: Concatenating S1 and S2 to 
// get "GeeksforGeeks" then reversing it to 
// "skeeGrofskeeG".
package gfg.strings;

public class javaStringSet {

    public static String solutionString(String s1,String s2){
        String str = s1+s2;

        StringBuilder reverseStr = new StringBuilder("");
        for(int i=str.length()-1; i >= 0; i--){
            reverseStr.append(str.charAt(i));
        }

        return reverseStr.toString();
    }

    public static void main(String args[]){
        String s1 = "Geeks";
        String s2 = "forGeeks";

        String sol = solutionString(s1, s2);
        System.out.println(sol);
    }
}
