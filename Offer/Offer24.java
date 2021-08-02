public class Offer24 {

    class ListNode{
        int val;
        ListNode next;
        ListNode(int x){val = x;}
    }

    public ListNode reverseList(ListNode head) {
        if (head == null){
            return head;
        }

        ListNode prev = null;
        ListNode curr = head;
        while (curr != null){
            ListNode next  = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
}
