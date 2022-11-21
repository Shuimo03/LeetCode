package linkedList;

public class LeetCode21 {

    /**
     * 循环做法
     * @param list1
     * @param list2
     * @return
     */
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode dummy = new ListNode(-1), p = dummy;
        ListNode p1 = list1,p2 = list2;
        while(p1 != null && p2 != null){
            if(p1.val > p2.val){
                p.next = p2;
                p2 = p2.next;
            }else{
                p.next = p1;
                p1 = p1.next;
            }
            p = p.next;
        }
        if(p1 != null){
            p.next = p1;
        }
        if(p2 != null){
            p.next = p2;
        }
        return dummy.next;
    }

    /**
     * 递归做法: 递归必须要有一个终止条件，要不然就会导致死循环。递归函数先不断调用自身，直到遇到终止条件后进行回溯，最终返回答案。
     * @param list1
     * @param list2
     * @return
     */
    public ListNode mergeRecursionTwoLists(ListNode list1, ListNode list2){
        if(list1 == null){
            return list2;
        }else if(list2 == null){
            return list1;
        }else if(list1.val < list2.val){
            list1.next = mergeRecursionTwoLists(list1.next,list2);
            return list1;
        }else{
            list2.next = mergeRecursionTwoLists(list1,list2.next);
            return list2;
        }
    }
}
