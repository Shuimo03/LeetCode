import java.util.Arrays;

public class Offer11 {


    public int minArray(int[] numbers) {
        Arrays.sort(numbers);
        return numbers[0];
    }
}
