#include<vector>
#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0),next(nullptr) {}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x, ListNode *next): val(x),next(next){}
};

/**
 * 1.遍历链表,获取链表长度,在获取中间节点。
 * 
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* ptr = head;
        int ListLength = 0;

        while(ptr){
            ListLength++;
            ptr = ptr->next;
        }
        int halfListLength = ListLength/2;
        ptr = head;

        //swap 转换一半的链表
        ListNode* pre = nullptr;
        ptr = head;

        for(int i = 0; i < halfListLength; i++){
            ListNode* node = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = node;
        }
        //如果是奇数的话就需要向移动
        if(ListLength & 1){
            ptr = ptr->next;
        }

        while(ptr){
            if(ptr->val != pre->val) return false;
            ptr = ptr->next;
            pre = pre->next;
        }
        return true;
    }
};