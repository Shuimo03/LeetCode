import java.util.LinkedList;

public class 剑指offer22 {

    public class ListNode{

        int val;
        ListNode next;
        ListNode(int x){val = x;}
    }

    public ListNode getKthFromEnd(ListNode head, int k) {
        ListNode former = head, latter = head;
        for (int i = 0; i < k; i++){
            former = former.next;
        }
        while (former != null){
            former = former.next;
            latter = latter.next;
        }
        return latter;
    }

}
