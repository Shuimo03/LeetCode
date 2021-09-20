#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
   vector<int>nums = {9,1,7,9,7,9,7};
    unordered_map<int, int> counts;
        int majority = 0, cnt = 1;
        for (int num: nums) {
            ++counts[num];
            if (counts[num] == cnt) {
                majority = num;
                cnt = counts[num];
            }
        }
        cout << majority << endl;
}

