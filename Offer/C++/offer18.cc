#include<iostream>
using namespace std;

struct ListNode {
    int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    //单指针做法,时间复杂度O(n),最直接明了
    ListNode* deleteNode(ListNode* head, int val){
        if(head == NULL){
            return NULL;
        }

        if(head->val == val){
            return head->next;
        }

        ListNode* pre = head;
        while((pre->next != NULL) && (pre->next->val != val)){
            pre = pre->next;
        }

        //找到要删除的节点
        if(pre->next != NULL){
            pre->next = pre->next->next;
        }
        return head;
    }
    // 双指针做法
    ListNode* deleteNode(ListNode* head, int val){
        if(head == NULL){
            return NULL;
        }

        if(head->val == val){
            return head->next;
        }
        ListNode* pre = head; // 当前节点
        ListNode* curr = head; // 保存删除节点的前一个节点

        while(curr != NULL && curr->val != val){
            pre = curr;
            curr = curr->next;
        }

        if(curr != NULL){
            pre->next = curr->next;
        }

        return head;
    }
};