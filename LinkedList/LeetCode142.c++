#include<iostream>
#include<vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head; // 定义快慢指针在头节点

        // 判断是否存在环路
        do{
            if(!fast || !fast->next) return nullptr;

            fast = fast->next->next;
            slow = slow->next;
        }while(fast != slow);

        // 如果存在,查找到环路节点
        fast = head;
        while (fast != slow){
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
              
    }
};