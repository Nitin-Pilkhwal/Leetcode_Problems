#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        map<string,int> mp;
        int count =0;
        for(int i=0;i<words.size();i++){
            string s = words[i];
            string r = words[i];
            reverse(r.begin(), r.end());
            if(mp.find(r)!=mp.end()) count++;
            mp[s]++;
        }
        return count;
    }
};
int main(){

return 0;
}