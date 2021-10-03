#include<iostream>
#include<unordered_map>
using namespace std;

class Node{

    public:
    int val;
    Node* next;
    Node* random;

    Node(int _val){
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return nullptr;
        Node* cur = head;
        unordered_map<Node*,Node*>map;
        while(cur != nullptr){
            map[cur] = new Node(cur->val);
            cur = cur->next;
        }
        cur = head;
        // 构造新链表的next和random指向
        while(cur != nullptr){
            map[cur]->next = map[cur->next];
            map[cur]->random = map[cur->random];
            cur = cur->next;
        }
        return map[head];
    }
};