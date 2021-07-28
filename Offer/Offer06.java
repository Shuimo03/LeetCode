import java.util.LinkedList;

public class Offer06 {

    static class ListNode{

        int val;
        ListNode next;
        ListNode(int x){val = x;}
    }

    public int[] reversePrint(ListNode head) {
        LinkedList<Integer> linkedList = new LinkedList<>();
        while (linkedList != null){
            linkedList.addLast(head.val);
            head = head.next;
        }
        int[]res = new int[linkedList.size()];
        for(int i = 0 ; i < res.length;i++){
            res[i] = linkedList.removeLast();
        }
        return res;
    }
}
