#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0),left(nullptr),right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right (nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        int left = highofTree(root->left);
        int right = highofTree(root->right);
        return abs(left-right <=1 && isBalanced(root->left) && isBalanced(root->right));
    }

    int highofTree(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = highofTree(root->left)+1;
        int right = highofTree(root->right)+1;
        return left+right;
    }
};