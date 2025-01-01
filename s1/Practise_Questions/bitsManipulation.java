public class bitsManipulation {
    public static int getBit(int num, int k) {
        int bitMask = 1 << k;
        if ((num & bitMask) == 0) {
            return 0;
        } else {
            return 1;
        }
    }

    public static int setBit(int num, int k) {
        int bitMask = 1 << k;
        return num | bitMask;
    }

    public static int clearBit(int num, int k) {
        int bitMask = ~(1 << k);
        return num & bitMask;
    }

    public static int updateBit(int num, int k, int n) {
        num = clearBit(num, k);
        int bitMask = n << k;
        return n | bitMask;
    }

    public static void fastExponentiation(int n){
        
    }

    public static void main(String args[]) {
        int x = 10;
        // System.out.println(getBit(x, 3));
        // System.out.println(setBit(x, 3));
        // System.out.println(clearBit(x, 3));
        System.out.println(updateBit(x, 3, 0));
    }
}
