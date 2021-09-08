#include<iosteam>
#include<vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0),next(nullptr){}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x,ListNode *next): val(x),next(next){}
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r1 = reverseList(l1);
        ListNode* r2 = reverseList(l2);
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        int carry = 0;

        while(r1 != nullptr || r2 != nullptr){
            cur->next = new ListNode(0);
            cur = cur->next;
            int n1 = 0;
            if(r1 != nullptr){
                n1 = r1->val;
                r1 = r1->next;
            }
            int n = 0;
            if(r2 != nullptr){
                n2 = r2->val;
                r2 = r2->next;
            }
            int sum = n1+n2+carry;
            carry  = sum / 10;
            cur->val = sum % 10;

            if(carry){
                cur->next = new ListNode(1);
            }
            ListNode* r3 = dummy->next;
            delete dummy;
            dummy = nullptr;
            ListNode* l3 = reverseList(r3);
            return l3;
        }
    }

    ListNode* reverseList(ListNode* head){
        if(head == nullptr){
            return head;
        }
        ListNode* left = nullptr;
        ListNode* cur = head;
        ListNode* right = nullptr;

        while(cur != nullptr){
            right = cur->next;
            cur->next = left;
            left  = cur;
            cur = right;
        }
        return left;
    }
};