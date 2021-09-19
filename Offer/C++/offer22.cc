#include<stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* former = head;
        ListNode* latter = head;

        for(int i =0; i < k; i++){
            former = former->next;
        }

        while(former != NULL){
            former = former->next;
            latter = latter->next;
        }
        return latter;
    }
};