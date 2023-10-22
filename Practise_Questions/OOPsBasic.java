
class Students {
    String name;
    int marks;
}

public class OOPsBasic {
    public static void main(String args[]) {
        Students s1 = new Students();
        //
        s1.marks = 80;
        s1.name = "Ramesh";

        System.out.println(s1.marks);
        System.out.println(s1.name);
    }
}
