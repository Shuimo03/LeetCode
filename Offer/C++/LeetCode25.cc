#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};


class Solution {
public:
    pair<ListNode*,ListNode*>ReverseList(ListNode* head,ListNode* tail){
            ListNode* prev = tail->next;
            ListNode* p = head;
            while(prev != tail){
                ListNode* next = p->next;
                p->next = prev;
                prev = p;
                p = next;
            }

            return {tail,head};
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* hair = new ListNode(0);
        hair->next = head;
        ListNode* pre = hair;

        while(head){
            ListNode* tail = pre;
            //查看剩余部分长度是否大于等于k
            for(int i = 0; i < k; i++){
                tail = tail->next;
                if(!tail){
                    return hair->next;
                }
            }

            ListNode* next = tail->next;
            tie(head,tail) = ReverseList(head,tail);
            //把子链表重新接回原链表
            pre->next = head;
            tail->next = next;
            pre = tail;
            head = tail->next;
        }
        return hair->next;
    }
};