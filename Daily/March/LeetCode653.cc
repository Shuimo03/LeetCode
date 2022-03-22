#include<iostream>
#include<vector>
#include<algorithm>
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

        vector<int> res;

        bool findTarget(TreeNode* root, int k) {
           inorder(root);
            int l = 0, r= res.size()-1;
            while(l < r){
                if(res[l]+res[r] == k){
                    return true;
                }
                if(res[l]+res[r] < k){
                    l++;
                }else{
                    r--;
                }
            }
            return false;
        }

        void  inorder(TreeNode *root){
            if(root == nullptr){
                return;
            }
            inorder(root->left);
            res.push_back(root->val);
            inorder(root->right);
        }
};