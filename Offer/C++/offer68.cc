#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    TreeNode* ans(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root->val < p->val){
            return ans(root->right,p,q);
        }
        if(root->val > q->val){
            return ans(root->left,p,q);
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val > q->val){
            return ans(root,q,p);
        }
        return ans(root,p,q);
    }
};