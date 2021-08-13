package greedy;

public class LeetCode860 {


    public boolean lemonadeChange(int[] bills) {
        if(bills[0] >= 10){
            return false;
        }

        int fives = 0,tens = 0;
        for(int i = 0; i < bills.length; i++){
            if (bills[i] == 5){
                fives++;
            }
            else if (bills[i] == 10){
                fives--;
                tens++;
            }
            else if (bills[i] == 20){
                fives--;
                tens--;
            }
            else{
                fives -= 3;
            }
        }
        if (fives < 0 || tens < 0){
            return false;
        }
        return true;
    }

    public static void main(String[] args) {

        LeetCode860 leetCode860 = new LeetCode860();
        int arr[] = new int[]{5,5,5,10,20};
        System.out.println(leetCode860.lemonadeChange(arr));
    }
}
