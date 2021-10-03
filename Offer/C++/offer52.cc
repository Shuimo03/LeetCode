#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr){
            return nullptr;
        }
        ListNode* Pa = headA;
        ListNode* Pb = headB;

        while(Pa != Pb){
            Pa = Pa == nullptr ? headB:Pa->next;
            Pb = Pb == nullptr ? headA:Pb->next;
        }
        return Pa;
    }
};