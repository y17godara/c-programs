package Practise_Questions;

public class shortestPath {

    public static float shortestPathFinder(String s) {
        int x = 0;
        int y = 0;

        for (int i = 0; i < s.length(); i++) {
            char dir = s.charAt(i);
            if (dir == 'N') {
                y++;
            } else if (dir == 'S') {
                y--;
            } else if (dir == 'E') {
                x++;
            } else if (dir == 'W') {
                x--;
            } else {
                System.out.println("Wrong Input!");
                return -1;
            }
        }

        System.out.println("Value of X " + x + " and Y " + y);
        // Find displacement
        int X2 = x*x;
        int Y2 = y*y;
        return (float)(Math.sqrt(X2 + Y2));
    }

    public static void main(String[] args) {
        String path = "WNEENESENNN";
        float dis = shortestPathFinder(path);
        System.out.println(dis);
    }
}