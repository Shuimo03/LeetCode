package greedy;

import java.util.Arrays;

public class LeetCode881 {
    public int numRescueBoats(int[] people, int limit) {
        if(people.length == 0){
            return 0;
        }
        Arrays.sort(people);

        int l = 0;
        int r = people.length-1;
        int sum = 0;
        while (l <= r){

            if (people[l]+people[r] <= limit){
                l++;
            }
            r--;
            sum++;
        }
        return sum;
    }
}
