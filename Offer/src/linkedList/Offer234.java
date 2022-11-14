package linkedList;

import java.util.ArrayDeque;
import java.util.Deque;

public class Offer234 {
    class Solution {
        /**
         *  解题思路方法一: 回文的特性主要就是正着读和反着读顺序一样，所以可以利用栈来模拟，因为栈的特性特性就是先进后出。只要进栈顺序和出栈顺序一样就表示具有回文性质。
         *  时间复杂度O(N)
         *  空间复杂度O(N)
         */
        public boolean isPalindrome(ListNode head) {
            ListNode cur = head;
            Deque<Integer> stack = new ArrayDeque<>();
            while(cur != null){
                stack.addFirst(cur.val);
                cur = cur.next;
            }

            while(!stack.isEmpty()){
                if(stack.peek() != head.val){
                    return false;
                }
                stack.removeFirst();
                head = head.next;
            }
            return true;
        }

        /**
         * 解题思路方法二: 快慢指针做法，修改链表结构，这样可以节省额外空间，从而达到O(1)的空间复杂度。
         * 将链表后半段反转，然后和前半段进行比较，如果对比结果相同则说明是回文:
         * 修改前:1->2->2->1->null
         * 修改后:1->2->1->2->null
         * 对比完成后需要在反转一次，把链表恢复到最初状态。
         * */
        public boolean isPalindromeDoublePointer(ListNode head){
            if(head  == null){
                return  true;
            }
            ListNode firstHalfEnd = endOfListHalf(head);
            ListNode secondHalfStart  = reverseList(firstHalfEnd.next);

            //判断是否是回文
            ListNode p1 = head;
            ListNode p2 = secondHalfStart;
            boolean res  = true;
            while (res && p2 != null){
                if(p1.val != p2.val){
                    res =  false;
                }
                p1 = p1.next;
                p2 = p2.next;
            }
            firstHalfEnd.next =  reverseList(secondHalfStart);
            return res;
        }

        private ListNode reverseList(ListNode  head){
            ListNode prev = null;
            ListNode curr = head;
            while(curr != null){
                ListNode temp = curr.next;
                curr.next = prev;
                prev = curr;
                curr  =temp;
            }
            return prev;
        }

        private ListNode endOfListHalf(ListNode head){
            ListNode fast = head,slow =  head;
            while (fast.next != null && fast.next.next != null){
                fast = fast.next.next;
                slow =  slow.next;
            }
            return slow;
        }
    }
}
