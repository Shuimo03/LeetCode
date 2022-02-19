#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

/**
 * 题目大概意思:给定一个数组,使用一个K值进行反转,最后结果让数组有序(从小到大),K值的范围在[1,arr.lengteh()]
 * 而K值是通过算法得出的，所以这题的关键在于如何获取K值？
 * 给个例子:[3,2,4,1],它的K值最后是 4 2 4 3,分别代表着:
 * [3,2,4,1] k=4 反转数组下标[0]-[3]的值所以结果是:[1,4,2,3]
 * [1,4,2,3] k=2 反转数组下标[0]-[1]的值所以结果是:[4,1,2,3]
 * [4,1,2,3] k=4 反转数组下标[0]-[3]的值所以结果是:[3,2,1,4]
 * [3,2,1,4] k=3 反转数组下标[0]-[2]的值所以结果是:[1,2,3,4]
 */

class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        //为什么要倒序?
        for(int n = arr.size(); n > 1; n--){
            int index = max_element(arr.begin(),arr.begin()+n)-arr.begin(); // 为什么要选择它?
            if(index == n-1){
                continue;
            }
            reverse(arr.begin(),arr.begin()+index+1); // 左闭右开的区间
            reverse(arr.begin(),arr.begin()+n);
            res.push_back(index+1);
            res.push_back(n);
        }
         return res;
    }
};