#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());

         int numOfChildren = g.size(),numOfCookies = s.size();
         int cnt = 0;
         
         for(int i = 0 , j = 0; i < numOfChildren && j < numOfCookies; i++,j++){

                while(j < numOfCookies && g[i] > s[j]){
                    j++;
                }
                if(j < numOfCookies){
                    cnt++;
                }
         }
         return cnt;
    }
};