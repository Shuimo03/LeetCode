import java.util.LinkedList;
import java.util.Stack;

public class Offer06 {

    static class ListNode{

        int val;
        ListNode next;
        ListNode(int x){val = x;}
    }

    public int[] reversePrint(ListNode head) {


        // 使用栈实现
        Stack<ListNode> stack = new Stack<>();
        ListNode temp = head;
        while (temp != null){
            stack.push(temp);
            temp = temp.next;
        }
        int size = stack.size();
        int[]print = new int[size];

        for(int i = 0; i < size; i++){
            print[i] = stack.pop().val;
        }
        return print;
    }
}
