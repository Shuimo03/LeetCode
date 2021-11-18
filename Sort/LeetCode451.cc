#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> cnt;
        int maxFreq = 0;
        int lenth = s.size();

        // 统计出现次数
        for(auto &ch :s){
            maxFreq = max(maxFreq,++cnt[ch]);
        }

        vector<string>buckets(maxFreq+1);

        for (auto &[ch, num] : cnt) {
            buckets[num].push_back(ch);
        }
        string ret;

        for(int i = maxFreq; i > 0; i--){
            string &bucket = buckets[i];
            for(auto &ch:bucket){
                for(int k = 0; k < i; k++){
                    ret.push_back(ch);
                }
            }
        }
        return ret;
    }
};