package linkedList;

import java.util.ArrayDeque;
import java.util.Deque;

public class Offer206 {
    class Solution {
        public ListNode reverseList(ListNode head) {
            if(head == null) {
                return  head;
            }

            Deque<ListNode> stack = new ArrayDeque<>();
            ListNode curr = head;
            while(head != null){
                stack.addFirst(head);
                head = head.next;
            }
            ListNode node = stack.removeFirst();
            ListNode dummy = node;

            while (!stack.isEmpty()){
                ListNode tempNode = stack.removeFirst();
                node.next= tempNode;
                node = node.next;
            }
            node.next = null;
            return dummy;
        }

        public ListNode reverseListDoublePoint(ListNode head){
            if(head == null) {
                return  head;
            }
            ListNode cur = null;
            ListNode pre = head;

            while(pre != null){
                ListNode temp = pre.next;
                pre.next = cur;
                cur = pre;
                pre = temp;
            }
            return cur;
        }
    }
}
