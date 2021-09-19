#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
       // stack<int> Stack;
        vector<int> res;
        ListNode* temp = head;
        while(temp != NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};