#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int>seq;
    bool verifyPostorder(vector<int>& postorder) {
        seq = seq = postorder;
        // 递归处理,左右边界
        return dfs(0,seq.size()-1);
    }

    bool dfs(int l, int r){
        if(l >= r){
            return true;
        }
        int root = seq[r]; // 后序遍历的根节点
        int k = l;
        //遍历左子树部分
        while(k < r && seq[k] < root){
            k++;
        }
        //判断是否合法
        for(int i = k; i < r; i++){
            if(seq[i] < root){
                return false;
            }  
        }
        return dfs(l,k-1) && dfs(k+1,r); 
    }
};