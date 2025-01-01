// import java.util.*;

public class getNumOfSmallVovels {

    public static int getNumOfSmallVovelsInString(String str){
        int count = 0;
        for(int i=0; i<str.length()-1; i++){
            int current = str.charAt(i);
            if(current == 'a' | current == 'e' | current == 'i' | current == 'o' | current == 'u'){
                count++;
            }
        }

        return count;
    }

    public static void main(String args[]){
        String str = "Hello I am Jowe , How many small vovels there?";

        int NumOfSmallVovels = getNumOfSmallVovelsInString(str);
        System.out.println(NumOfSmallVovels);
    }
}