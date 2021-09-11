#include<iostream>
using namespace std;

const int N = 10;
int n;
int path[N]; // 遍历的路径
bool st[N]; // 状态
void dfs(int u){

    if(u == n){
        for(int i = 0; i < n; i++){
            printf("%d ",path[i]); 
        }
        puts("");
        return;
    }

    for(int i = 1; i <= n; i++){
        //没有遍历过的地方
        if(!st[i]){
            path[u] = i;
            st[i] = true;
            dfs(u+1);
            //回溯,恢复现场
            st[i] = false;
        }
    }
}

int main(){
    cin >> n;
    dfs(0);
    return 0;
}