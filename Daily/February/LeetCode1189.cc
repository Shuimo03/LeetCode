#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
       
       /**
        * 1.统计每个字母出现的次数
        * 2. l和o需要2个,所以要除以2.
        * 3.求出最小值即可
        */
       vector<int> cnt(5);

       for(auto &context:text){
           if(context == 'b'){
               cnt[0]++;
           }else if(context == 'a'){
               cnt[1]++;
           }else if(context == 'l'){
               cnt[2]++;
           }else if(context == 'o'){
               cnt[3]++;
           }else if(context == 'n'){
               cnt[4]++;
           }
       }
       cnt[2] /= 2;
       cnt[3] /= 2;

       return *min_element(cnt.begin(),cnt.end());
    }
};