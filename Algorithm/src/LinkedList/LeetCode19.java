package LinkedList;

import java.util.Stack;

public class LeetCode19 {

    class  ListNode{
        int val;
        ListNode next;
        ListNode(){};
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if (head == null){
            return  null;
        }

        ListNode dumm = new ListNode(0,head); // 设置一个哑节点
        Stack<ListNode> stack = new Stack<>();
        ListNode cur = dumm;

        while(cur != null){
            stack.push(cur);
            cur = cur.next;
        }

        for(int i  = 0; i < n; i++){
            stack.pop();
        }
        ListNode prev = stack.peek(); //栈顶节点
        prev.next = prev.next.next;
        ListNode ans = dumm.next;
        return ans;
    }
}
