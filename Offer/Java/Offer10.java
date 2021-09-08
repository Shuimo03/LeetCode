import sun.font.CreatedFontTracker;

public class Offer10 {
    public int fib(int n) {
    if (n == 0){
        return 0;
    }
        int arr[] = new int[n+2];
        arr[0] = 0;
        arr[1] = 1;
        for(int i = 2; i <=n; i++){
            arr[i] = (arr[i-1]+arr[i-2]) % 1000000007;
        }
        return arr[n];
    }

    public static void main(String[] args) {
        Offer10 offer10 = new Offer10();
        System.out.println(offer10.fib(1000000008));
    }
}
