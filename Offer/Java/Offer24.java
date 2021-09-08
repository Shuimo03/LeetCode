import java.util.Stack;

public class Offer24 {

    class ListNode{
        int val;
        ListNode next;
        ListNode(int x){val = x;}
    }

//    public ListNode reverseList(ListNode head) {
//        if (head == null){
//            return head;
//        }
//        ListNode dum = head,pre = null;
//        while (dum != null){
//            ListNode temp = dum.next;
//            dum.next = pre;
//            pre = dum;
//            dum = temp;
//        }
//        return pre;
//    }

    public ListNode reverseList(ListNode head){
        ListNode dum = head;
        Stack<ListNode> stack = new Stack<>();
        while (dum != null){
            stack.push(dum);
            dum = dum.next;
        }

        ListNode newHead = stack.pop();
        dum = newHead;

        while (!stack.isEmpty()){
            dum.next = stack.pop();
            dum = dum.next;
        }
        dum.next = null;
        return newHead;
    }
}
