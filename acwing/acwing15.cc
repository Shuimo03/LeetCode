#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    bool searchArray(vector<vector<int>> array, int target) {
        if(array.empty() || array[0].empty()){
            return false;
        }
        int i = 0, j = array[0].size()-1;

        while(i < array.size() && j >= 0){
                if(array[i][j] == target) return true;
                else if(array[i][j] > target) j--;
                else i++;
        }
        return false;
    }

};


int main(){

    vector<vector<int>> arr = {{1,2,8,9},{2,4,8,12},{4,7,10,13},{6,8,11,15}};
    cout << arr.size()<< endl;
    cout << arr[0].size() << endl;
    return 0;
}