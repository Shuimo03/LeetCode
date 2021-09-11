#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int> res;
        queue<TreeNode*>q;
        TreeNode *temp;
        q.push(root);
        int len = q.size();
        while(!q.empty()){
            for(int i = 0; i < len; i++){
                temp  = q.front();
                q.pop();
                res.push_back(temp->val);
            }
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
         return res;
    }
};