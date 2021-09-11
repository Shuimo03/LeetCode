#include<iostream>
#include<vector>
#include<queue>
using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(nullptr),right(nullptr){};
    TreeNode(int x):val(x),left(nullptr), right(nullptr){};
}

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<vector<int>> res;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *temp;
        int len;
        while(!q.empty()){
            len = q.size();
            vector<int> v;
            for(int i = 0; i < len; i++){
                temp = q.front();
                q.pop();
                v.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            res.push_back(v);
        }
        return res;
    }
};