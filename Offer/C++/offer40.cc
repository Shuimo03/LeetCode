#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;


class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        // vector<int> res(k,0);
        // sort(arr.begin(),arr.end());
        // for(int i = 0 ; i < k; i++){
        //     res[i] =arr[i];
        // }
        // return res;

        vector<int>res;
        if(k == 0){
            return res;
        }
        priority_queue<int> pq;
        for(int i = 0; i < k; i++){
            pq.push(arr[i]);
        }

        for(int i = k; i < (int)pq.size(); i++){
            if(pq.top() > arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        for(int i = 0; i < k; i++){
            res[i] = pq.top();
            pq.pop();
        }
        return res;
    }
};
