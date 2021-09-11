#include<iostream>
#include<vector>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:

    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int& rootIndex,int left,int right){
        if (left > right){
            return NULL;
        }
        int pivot = left;
        while(inorder[pivot] != preorder[rootIndex]){
            pivot++;
        }
        rootIndex++;
        
        TreeNode* newNode = new TreeNode(inorder[pivot]);
        newNode->left = build(preorder,inorder,rootIndex,left,pivot-1);
        newNode->right = build(preorder,inorder,rootIndex,pivot+1,right);
        return newNode;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIndex = 0;
        return build(preorder,inorder,rootIndex,0,inorder.size()-1);
    }
};