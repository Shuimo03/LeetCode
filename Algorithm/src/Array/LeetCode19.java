package Array;

public class LeetCode19 {
    public class ListNode {
        int val;
        ListNode next;
        ListNode(){}
        ListNode(int val){this.val = val;}
        ListNode(int val,ListNode next){
            this.val = val;
            this.next = next;
        }
    }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dummy = new ListNode(0,head); //定义哑巴节点
        int ListLen = ListLength(head);
        ListNode cur = dummy;
        for(int i = 1; i < ListLen-n+1; i++){
            cur = cur.next;
        }
        cur.next = cur.next.next;
        ListNode ans = dummy.next;
        return ans;
    }

    private int ListLength(ListNode listNode){
        int cnt = 0;
        while (listNode != null){
            listNode = listNode.next;
            cnt++;
        }
        return cnt;
    }
}
