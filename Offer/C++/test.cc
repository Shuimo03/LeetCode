#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{   
    vector<int> arr = {2,7,9,3,1};
    int odd = 0;
    int even = 0;
    for(int i = 0; i < arr.size(); i++){
        if(i % 2 == 0){
            even += arr[i];
        }
        else if(i % 2 == 1){
            odd += arr[i];
        }
        cout << max(even,odd) << endl;
    }
    return 0;
}
