package linkedList;

import java.util.LinkedList;

public class Offer06 {
    public int[] reversePrint(ListNode head) {
        LinkedList<Integer> stack = new LinkedList<>();
        while(head != null){
            stack.addFirst(head.val);
            head = head .next;
        }
        int[]res = new int[stack.size()];
        for(int i = 0; i < res.length; i++){
            res[i] = stack.removeFirst();
        }
        return res;
    }
}
