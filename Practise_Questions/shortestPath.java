package Practise_Questions;

public class shortestPath {
    
    public static void shortestPathFinder(String s) {
        int x = 0;
        int y = 0;

        for (int i = 0; i < s.length(); i++) {
            char dir = s.charAt(i);
            if (dir == 'N') {
                y++;
            } else if (dir  == 'S') {
                y--;
            } else if (dir  == 'E') {
                x++;
            } else if (dir  == 'W') {
                x--;
            }
            else{
                
                System.out.println("Wrong Input!");
            }
        }

        System.out.println("Value of X "+ x +" and Y "+ y);
    }
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        String path = "WNEENESENNN";
        shortestPathFinder(path);
    }
}