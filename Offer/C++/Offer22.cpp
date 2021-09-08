struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0),next(nullptr){}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x,ListNode *next): val(x),next(next){}
}

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        delete dummy;
        dummy = nullptr;
    
        ListNode* headB = slow->next;
        slow->next = nullptr;
        ListNode* p2 = reverseList(headB);
        ListNode* p1 = head;
        ListNode* p3 = nullptr;
        
        while(p2 != nullptr){
                        p3 = p1->next;
            p1->next = p2;
            p1 = p2;
            p2 = p3;
        }
    }

    ListNode* reverseList(ListNode* head){
        if(head == nullptr){
            return head;
        }
        ListNode* left = nullptr;
        ListNode* curr = head;
        ListNode* right = nullptr;

        while(curr != nullptr){
            right = curr->next;
            curr->next = left;
            left = curr;
            curr = right;
        }
        return left;
    }
};