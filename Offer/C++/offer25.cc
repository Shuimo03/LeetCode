using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 = NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }

        if(l1->val < l2->val){
            l1->next = mergeTwoLists(l1->next,l2);
            return l1;
        }
        else{
            l2->next = mergeTwoLists(l1,l2->next);
            return l2;  
        }
    }

    // 双指针写法
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val < l2->val){
                temp->next = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        temp->next = l1 != nullptr ? l1:l2;
        return res->next;
    }
};