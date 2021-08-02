//数学题
public class Offer14 {
    public int cuttingRope(int n) {
        if (n <= 3) return n-1;
        int a = n/3,b = n%3;
        if (b == 0){
            return (int)Math.pow(3,a);
        }
        if (b == 1){
            return (int)Math.pow(3,a-1)*4;
        }
        return (int)Math.pow(3,a)*2;
    }

    public static void main(String[] args) {
        Offer14 offer14 = new Offer14();
        System.out.println(offer14.cuttingRope(3));
    }
}
