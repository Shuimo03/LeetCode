#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {

private:
bool ans = true;
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        int left = isBalanced(root->left);
        int right = isBalanced(root->right);

        if(abs(left-right)<=1){
            return true;
        }
        return false;
    }

    bool isBalanced(TreeNode* root){
        dfs(root);
        return ans;
    }

    int dfs(TreeNode* root){
        if(!root){
            return 0;
        }
        int left = 1+dfs(root->left);
        int right = 1+dfs(root->right);
        if(abs(left-right) > 1){
            ans = false;
        }
        return max(left,right);
    }
};