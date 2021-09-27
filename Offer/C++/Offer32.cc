#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {

        if(root == NULL){
            return {};
        }
        vector<int>res;
        queue<TreeNode*>q;
        TreeNode *curr;
        q.push(root);

        while(!q.empty()){
            for(int i = 0; i < q.size(); i++){
                curr = q.front();
                q.pop();
                res.push_back(curr->val);
            }
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        return res;
    }
};