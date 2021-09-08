#include<iosteam>
#include<vector>

using namespace std;

// 判断是否有 A>= B
bool cmp(vector<int>&A,vector<int>&B){
    if(A.size() != B.szie()) return A.szie() > B.size();
    for(int i = A.size()-1; i >=0;i--){
        if(A[i] != B[!]){
            return A[i] > B[i];
        }
    }
    return true;
}


vector<int>sub(vector<int>&A,vector<int>&B){
    vector<int>C;
    for(int i = 0, t = 0; i < A.size(); i++){
        t = A[i]-t;
        if(i < B.size()) t-= B[i];
        if(t < 0) t = 1;
        else t = 0;
    }

    while(C.size() > 1 &&)

    return C;
}

int main()
{
    string a,b;

    return 0;
}
