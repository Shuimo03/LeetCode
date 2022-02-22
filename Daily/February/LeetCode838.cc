#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string pushDominoes(string dominoes) {
        string res = "";
        dominoes = "L"+dominoes+"R"; // 设置左边起始位置为L,右边终止位置为R,这样不会影响到骨牌倒下,更方便的使用双指针。
        /**
         * 当j指向点的时候，就跳过,目的是为了让i指向小区间的左边界，j指向右边界，然后用j-i-1算出中间点的个数。
         * 如果点数为0说明中间没有点，并且i > 0 就把左边界加入结果res中。
         * 如果左右边界相同，那中间的点都填充成左边界。
         * 
         * 
         */
        for(int i = 0, j = 1; j < dominoes.size(); j++){
            if (dominoes[j] == '.'){
                continue;
            }
            int mid = j-i-1;
            if(i > 0) {
                res += dominoes[i];
            }
            //
            if(dominoes[i] == dominoes[j]){
                res += string(mid,dominoes[i]);
            }else if(dominoes[i] == 'L' && dominoes[j] == 'R'){
                res+=string(mid,'.');
            }else{
                res+= string(mid/2, 'R')+ string(mid % 2, '.')+string(mid/2,'L');
            }
            i = j;
        }
        return res;
    }
};