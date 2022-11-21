package linkedList;

public class Offer52 {
    ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode p1 = headA,p2 = headB;
        while(p1 != null && p2 != null){
            if(p1.val != p2.val){
                p1 = p1.next;
                p2 = p2.next;
            }
        }
        return p1;
    }
}
