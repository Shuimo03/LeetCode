public class Offer22 {

    static class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
        }
    }

//    public ListNode getKthFromEnd(ListNode head, int k) {
//        ListNode dum = head,cur = head;
//        int listLength = 0;
//        while (head != null){
//            head = head.next;
//            listLength++;
//        }
//
//        for (int i = 0; i < listLength-k; i++){
//            dum = dum.next;
//        }
//        return dum;
//    }

    public ListNode getKthFromEnd(ListNode head, int k) {
        ListNode first = head;
        ListNode slow = head;

        for(int i = 0 ; i < k ; i++){
            if (first == null) {
                return null;
            }
            first = first.next;
        }

        while (first != null){
            first = first.next;
            slow = slow.next;
        }
        return slow;
    }
}
