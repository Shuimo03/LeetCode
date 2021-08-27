package Stack;

import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;

public class LeetCode347 {
    public int[] topKFrequent(int[] nums, int k) {

        Map<Integer,Integer> map = new HashMap<>();
        for(int num : nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        PriorityQueue<int[]> queue = new PriorityQueue<int[]>(new Comparator<int[]>() {

            @Override
            public int compare(int[] m, int[] n) {
                return m[1]-n[1];
            }
        });

        for(Map.Entry<Integer,Integer> entry:map.entrySet()){
            int num = entry.getKey(),cnt = entry.getValue();

            if (queue.size() == k){
                if (queue.peek()[1] < cnt){
                    queue.poll();
                    queue.offer(new int[]{num,cnt});
                }
            }else{
                queue.offer(new int[]{num, cnt});
            }
        }

        int[]ret = new int[k];
        for(int i = 0; i < k; i++){
            ret[i] = queue.poll()[0];
        }
        return  ret;
    }
}
