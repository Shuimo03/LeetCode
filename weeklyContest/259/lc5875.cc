#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(int i = 0; i < operations.size(); i++){
            if( operations[i] == "--X" || operations[i] == "X--"){
                X--;
            }else if(operations[i] == "++X" || operations[i] == "X++"){
                X++;
            }
        }
        return X;
    }
};

int main(int argc, char const *argv[])
{
    int X = 0;
    vector<string> operations = {"X++","++X","--X","X--"};
    for(int i = 0; i < operations.size(); i++){
        if( operations[i] == "--X" || operations[i] == "X--"){
            X--;
        }else if(operations[i] == "++X" || operations[i] == "X++"){
            X++;
        }
    }
    cout << X << endl;
    return 0;
}
